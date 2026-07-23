/*
 * XREFs of SepRmDispatchDataToLsa @ 0x1400D513C
 * Callers:
 *     SepRmCallLsa @ 0x1400D4F24 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 * Callees:
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1401509E0 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x140150A60 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x140153220 (ZwRequestPort.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140656640 (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rsi
  __int16 v4; // ax
  int v5; // eax
  unsigned int v6; // eax
  NTSTATUS v7; // eax
  void *v8; // rcx
  SIZE_T v10; // r8
  void *v11; // rdx
  void *v12; // rax
  int v13; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  _PORT_MESSAGE LpcMessage; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+70h] [rbp-98h]
  int v18; // [rsp+74h] [rbp-94h]
  PVOID BaseAddress[58]; // [rsp+78h] [rbp-90h] BYREF
  _PORT_MESSAGE LpcRequest; // [rsp+248h] [rbp+140h] BYREF
  NTSTATUS v21; // [rsp+270h] [rbp+168h]
  _BYTE Src[468]; // [rsp+274h] [rbp+16Ch] BYREF

  v2 = 0;
  PsGetMonitorContextServerSilo(SeRmSiloMonitor, *(_QWORD **)(a1 + 56), &v15);
  v3 = v15;
  if ( v15 )
  {
    if ( *(_QWORD *)(v15 + 8) )
    {
      v4 = *(_WORD *)(a1 + 36);
      LpcMessage.u2.s2.DataInfoOffset = 0;
      LpcRequest.u2.ZeroInit = 0;
      v21 = 0;
      *(unsigned int *)((char *)&LpcMessage.u1.Length + 2) = (unsigned __int16)(v4 + 48);
      LpcMessage.u1.s1.DataLength = v4 + 8;
      LpcRequest.u1.s1.DataLength = *(_WORD *)(a1 + 48);
      *(unsigned int *)((char *)&LpcRequest.u1.Length + 2) = (unsigned __int16)(LpcRequest.u1.s1.DataLength + 40);
      v17 = *(_DWORD *)(a1 + 32);
      v5 = *(_DWORD *)(a1 + 16);
      if ( v5 == 1 )
      {
        v18 = 1;
        v6 = *(_DWORD *)(a1 + 36);
        if ( v6 <= 0x1D0 )
        {
          memmove(BaseAddress, (const void *)(a1 + 24), v6);
          goto LABEL_6;
        }
      }
      else if ( (unsigned int)(v5 - 4) <= 2 )
      {
        v10 = *(unsigned int *)(a1 + 36);
        v11 = *(void **)(a1 + 24);
        if ( (unsigned int)v10 > 0x1D0 )
        {
          if ( (unsigned int)v10 > 0x1000 )
          {
            v13 = SepAdtCopyToLsaSharedMemory(*(HANDLE *)v15, v11, v10);
            v2 = v13;
            if ( v13 < 0 )
            {
              SepAuditFailed((unsigned int)v13);
LABEL_6:
              if ( v2 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
                {
                  v7 = ZwRequestWaitReplyPort(*(HANDLE *)(v3 + 8), &LpcMessage, &LpcRequest);
                }
                else
                {
                  v7 = ZwRequestPort(*(HANDLE *)(v3 + 8), &LpcMessage);
                  v21 = 0;
                }
                v2 = v7;
                if ( v7 >= 0 )
                {
                  v8 = *(void **)(a1 + 40);
                  if ( v8 )
                    memmove(v8, Src, *(unsigned int *)(a1 + 48));
                  v2 = v21;
                }
                if ( v18 == 3 )
                {
                  RegionSize = 0LL;
                  v2 = ZwFreeVirtualMemory(*(HANDLE *)v3, BaseAddress, &RegionSize, 0x8000u);
                }
              }
              goto LABEL_16;
            }
            v12 = 0LL;
            v18 = 3;
          }
          else
          {
            memmove(*(void **)(v15 + 64), v11, v10);
            v12 = *(void **)(v3 + 56);
            v18 = 2;
          }
          BaseAddress[0] = v12;
          LpcMessage.u1.Length = 3670032;
        }
        else
        {
          memmove(BaseAddress, v11, v10);
          v18 = 1;
        }
        if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 4) <= 1 )
          ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
        goto LABEL_6;
      }
      v2 = -1073741811;
LABEL_16:
      PspDereferenceMonitorContextServerSilo(v3 - 128);
      return (unsigned int)v2;
    }
    PspDereferenceMonitorContextServerSilo(v15 - 128);
  }
  return 0LL;
}
