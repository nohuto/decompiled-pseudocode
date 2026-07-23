/*
 * XREFs of SepRmDispatchDataToLsa @ 0x140117760
 * Callers:
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 * Callees:
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x1401178C4 (PspDereferenceMonitorContextServerSilo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14017F3B0 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x14017F430 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x140181B90 (ZwRequestPort.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1406D8AF8 (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v5; // ebx
  __int64 v6; // rsi
  __int16 v7; // ax
  int v8; // eax
  unsigned int v9; // eax
  NTSTATUS v10; // eax
  void *v11; // rcx
  SIZE_T v13; // r8
  void *v14; // rdx
  void *v15; // rax
  int v16; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  _PORT_MESSAGE LpcMessage; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+70h] [rbp-98h]
  int v21; // [rsp+74h] [rbp-94h]
  PVOID BaseAddress[58]; // [rsp+78h] [rbp-90h] BYREF
  _PORT_MESSAGE LpcRequest; // [rsp+248h] [rbp+140h] BYREF
  NTSTATUS v24; // [rsp+270h] [rbp+168h]
  _BYTE Src[468]; // [rsp+274h] [rbp+16Ch] BYREF

  v5 = 0;
  PsGetMonitorContextServerSilo(SeRmSiloMonitor, *(_QWORD **)(a1 + 56), &v18, a4);
  v6 = v18;
  if ( v18 )
  {
    if ( *(_QWORD *)(v18 + 8) )
    {
      v7 = *(_WORD *)(a1 + 36);
      LpcMessage.u2.s2.DataInfoOffset = 0;
      LpcRequest.u2.ZeroInit = 0;
      v24 = 0;
      *(unsigned int *)((char *)&LpcMessage.u1.Length + 2) = (unsigned __int16)(v7 + 48);
      LpcMessage.u1.s1.DataLength = v7 + 8;
      LpcRequest.u1.s1.DataLength = *(_WORD *)(a1 + 48);
      *(unsigned int *)((char *)&LpcRequest.u1.Length + 2) = (unsigned __int16)(LpcRequest.u1.s1.DataLength + 40);
      v20 = *(_DWORD *)(a1 + 32);
      v8 = *(_DWORD *)(a1 + 16);
      if ( v8 == 1 )
      {
        v21 = 1;
        v9 = *(_DWORD *)(a1 + 36);
        if ( v9 <= 0x1D0 )
        {
          memmove(BaseAddress, (const void *)(a1 + 24), v9);
          goto LABEL_6;
        }
      }
      else if ( (unsigned int)(v8 - 4) <= 2 )
      {
        v13 = *(unsigned int *)(a1 + 36);
        v14 = *(void **)(a1 + 24);
        if ( (unsigned int)v13 > 0x1D0 )
        {
          if ( (unsigned int)v13 > 0x1000 )
          {
            v16 = SepAdtCopyToLsaSharedMemory(*(HANDLE *)v18, v14, v13);
            v5 = v16;
            if ( v16 < 0 )
            {
              SepAuditFailed((unsigned int)v16);
LABEL_6:
              if ( v5 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
                {
                  v10 = ZwRequestWaitReplyPort(*(HANDLE *)(v6 + 8), &LpcMessage, &LpcRequest);
                }
                else
                {
                  v10 = ZwRequestPort(*(HANDLE *)(v6 + 8), &LpcMessage);
                  v24 = 0;
                }
                v5 = v10;
                if ( v10 >= 0 )
                {
                  v11 = *(void **)(a1 + 40);
                  if ( v11 )
                    memmove(v11, Src, *(unsigned int *)(a1 + 48));
                  v5 = v24;
                }
                if ( v21 == 3 )
                {
                  RegionSize = 0LL;
                  v5 = ZwFreeVirtualMemory(*(HANDLE *)v6, BaseAddress, &RegionSize, 0x8000u);
                }
              }
              goto LABEL_16;
            }
            v15 = 0LL;
            v21 = 3;
          }
          else
          {
            memmove(*(void **)(v18 + 64), v14, v13);
            v15 = *(void **)(v6 + 56);
            v21 = 2;
          }
          BaseAddress[0] = v15;
          LpcMessage.u1.Length = 3670032;
        }
        else
        {
          memmove(BaseAddress, v14, v13);
          v21 = 1;
        }
        if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 4) <= 1 )
          ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
        goto LABEL_6;
      }
      v5 = -1073741811;
LABEL_16:
      PspDereferenceMonitorContextServerSilo(v6 - 96);
      return (unsigned int)v5;
    }
    PspDereferenceMonitorContextServerSilo(v18 - 96);
  }
  return 0LL;
}
