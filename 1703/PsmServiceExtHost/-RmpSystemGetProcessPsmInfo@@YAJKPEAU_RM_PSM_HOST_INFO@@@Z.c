/*
 * XREFs of ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800184DC
 * Callers:
 *     ?RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800018C0 (-RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000C340 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180034D20 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x180015680 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x18001571C (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     ?RmpGetHostIdFromProcessToken@@YAJPEAXPEA_K@Z @ 0x18001875C (-RmpGetHostIdFromProcessToken@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpSystemGetProcessPsmInfo(unsigned int a1, wchar_t *a2)
{
  unsigned __int64 v3; // rbx
  void **Heap; // rdi
  NTSTATUS KeyFromToken; // ebx
  ULONG TokenInformationLength; // [rsp+30h] [rbp-D0h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  void *ProcessHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Source[232]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE Src[68]; // [rsp+260h] [rbp+160h] BYREF
  int TokenInformation; // [rsp+2A4h] [rbp+1A4h] BYREF
  unsigned int v17; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 v18; // [rsp+2B0h] [rbp+1B0h] BYREF

  v3 = a1;
  memset_0(Source, 0, 0x228uLL);
  ProcessHandle = 0LL;
  TokenHandle = 0LL;
  Heap = 0LL;
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ClientId.UniqueThread = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueProcess = (HANDLE)v3;
  KeyFromToken = NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
  if ( KeyFromToken >= 0 )
  {
    KeyFromToken = NtOpenProcessToken(ProcessHandle, 8u, &TokenHandle);
    if ( KeyFromToken >= 0 )
    {
      v9 = 464;
      KeyFromToken = PsmGetKeyFromToken(TokenHandle, Source, &v9, 0LL);
      if ( KeyFromToken >= 0 )
      {
        KeyFromToken = NtQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
        if ( (int)(KeyFromToken + 0x80000000) < 0 || KeyFromToken == -1073741789 )
        {
          Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, TokenInformationLength);
          if ( Heap )
          {
            KeyFromToken = NtQueryInformationToken(
                             TokenHandle,
                             TokenUser,
                             Heap,
                             TokenInformationLength,
                             &TokenInformationLength);
            if ( KeyFromToken >= 0 )
            {
              RmpRmSidInitialize((union _RM_SID *)Src, *Heap);
              KeyFromToken = NtQueryInformationToken(
                               TokenHandle,
                               TokenSessionId,
                               &TokenInformation,
                               4u,
                               &TokenInformationLength);
              if ( KeyFromToken >= 0 )
              {
                KeyFromToken = PsmQueryBackgroundActivationType(TokenHandle, &v10);
                if ( KeyFromToken >= 0 )
                {
                  v17 = 1 << v10;
                  KeyFromToken = RmpGetHostIdFromProcessToken(TokenHandle, &v18);
                  if ( KeyFromToken >= 0 )
                  {
                    RmpPsmAppInstanceIdInitialize(a2, Source, Src, TokenInformation, v17, v18);
                    KeyFromToken = 0;
                  }
                }
              }
            }
          }
          else
          {
            KeyFromToken = -1073741801;
          }
        }
      }
    }
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)KeyFromToken;
}
