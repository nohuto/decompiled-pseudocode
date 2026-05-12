/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1C003B6BC
 * Callers:
 *     StorpSmartAttributesWorkItemRoutine @ 0x1C0039CF0 (StorpSmartAttributesWorkItemRoutine.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  unsigned int *PoolWithTag; // rax
  unsigned int *OutputBuffer; // rbx
  __int64 v4; // rcx
  char *v5; // rcx
  PIRP v6; // rax
  NTSTATUS Status; // eax
  __int64 v8; // rax
  char v9; // si
  __int64 v10; // r8
  char *v11; // rdx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  int v15; // r10d
  __int16 v16; // r11
  __int64 v17; // rcx
  char v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19; // [rsp+51h] [rbp-AFh] BYREF
  char v20; // [rsp+52h] [rbp-AEh] BYREF
  char v21; // [rsp+53h] [rbp-ADh] BYREF
  __int16 v22; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v23; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+5Ch] [rbp-A4h] BYREF
  int v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  char *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  char *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  char *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  __int16 *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  int *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  __int16 *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  char *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( !KeGetCurrentIrql() )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x22DuLL, 0x65546152u);
    OutputBuffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x22DuLL);
      *OutputBuffer = 28;
      memmove(OutputBuffer + 1, "SCSIDISK", 8uLL);
      v4 = *OutputBuffer;
      OutputBuffer[3] = 0;
      v5 = (char *)OutputBuffer + v4;
      OutputBuffer[6] = 529;
      OutputBuffer[4] = 1770754;
      *(_DWORD *)v5 = 33;
      *((_DWORD *)v5 + 1) = 1325400528;
      v5[8] = -62;
      v5[10] = -80;
      v5[12] = *(_BYTE *)(a1 + 89);
      v6 = IoBuildDeviceIoControlRequest(
             0x4D008u,
             *(PDEVICE_OBJECT *)(a1 + 8),
             OutputBuffer,
             0x3Cu,
             OutputBuffer,
             0x22Du,
             0,
             &Event,
             &IoStatusBlock);
      if ( v6 )
      {
        v6->IoStatus.Status = -1073741637;
        Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v6);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 && IoStatusBlock.Information >= 0x22D )
        {
          v8 = *OutputBuffer;
          v9 = -1;
          if ( (unsigned int)v8 <= 0x1C )
          {
            v10 = 30LL;
            v11 = (char *)OutputBuffer + v8 + 23;
            do
            {
              v12 = (const struct _TlgProvider_t *)((unsigned int)(unsigned __int8)*(v11 - 5) - 4);
              if ( *(v11 - 5) != 4 )
              {
                v12 = (const struct _TlgProvider_t *)((unsigned int)(unsigned __int8)*(v11 - 5) - 9);
                if ( *(v11 - 5) != 9 )
                {
                  v12 = (const struct _TlgProvider_t *)((unsigned int)(unsigned __int8)*(v11 - 5) - 193);
                  if ( (unsigned __int8)*(v11 - 5) != 193 )
                  {
                    v12 = (const struct _TlgProvider_t *)((unsigned int)(unsigned __int8)*(v11 - 5) - 194);
                    if ( (unsigned __int8)*(v11 - 5) == 194 )
                      v9 = *v11;
                  }
                }
              }
              v11 += 12;
              --v10;
            }
            while ( v10 );
            if ( (unsigned int)dword_1C0048030 > 5 )
            {
              if ( TlgKeywordOn(v12, 0x400000000000uLL) )
              {
                v17 = *(_QWORD *)(a1 + 24);
                v25 = *(_DWORD *)(v17 + 56);
                v20 = *(_BYTE *)(a1 + 88);
                v18 = *(_BYTE *)(a1 + 89);
                v19 = *(_BYTE *)(a1 + 90);
                v29 = v17 + 5192;
                v31 = a1 + 1688;
                v33 = &v25;
                v35 = &v20;
                v37 = &v18;
                v39 = &v19;
                v41 = &v23;
                v43 = &v24;
                v45 = &v22;
                v47 = &v21;
                v23 = (__int16)v14;
                v24 = v15;
                v22 = v16;
                v21 = v9;
                v30 = 16LL;
                v32 = 16LL;
                v34 = 4LL;
                v36 = 1LL;
                v38 = 1LL;
                v40 = 1LL;
                v42 = 2LL;
                v44 = 4LL;
                v46 = 2LL;
                v48 = 1LL;
                TlgWrite((TraceLoggingHProvider)v17, &unk_1C0040C88, v13, v14, 0xCu, &pData);
              }
            }
          }
        }
      }
      ExFreePoolWithTag(OutputBuffer, 0x65546152u);
    }
  }
}
