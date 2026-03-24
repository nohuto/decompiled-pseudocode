/*
 * XREFs of MouseClassDeviceControl @ 0x1C000B510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00022A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004EF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C000581C (WPP_RECORDER_SF_qqLd.c)
 */

__int64 __fastcall MouseClassDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  struct _IO_REMOVE_LOCK *v6; // r15
  NTSTATUS v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rdx
  ULONG RemlockSize; // [rsp+20h] [rbp-48h]

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 4LL);
  }
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(v2 + 184);
  v6 = (struct _IO_REMOVE_LOCK *)(v4 + 32);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)v2, &byte_1C000C240, 1u, 0x20u);
  v8 = v7;
  if ( v7 < 0 )
  {
    *(_DWORD *)(v2 + 48) = v7;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    return v8;
  }
  WPP_RECORDER_SF_qqL(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 24);
  v12 = *(_DWORD *)(v5 + 24);
  if ( v12 != 983040 )
  {
    if ( v12 > 0x294140 )
    {
      if ( v12 != 2703684 )
      {
LABEL_22:
        v16 = -1073741808;
        goto LABEL_26;
      }
    }
    else if ( v12 != 2703680 )
    {
      switch ( v12 )
      {
        case 0xB0190u:
        case 0xB0191u:
        case 0xB0192u:
        case 0xB0193u:
        case 0xB0194u:
        case 0xB0197u:
        case 0xB0198u:
        case 0xB019Au:
        case 0xB019Cu:
        case 0xB019Eu:
        case 0xB01A0u:
        case 0xB01A4u:
        case 0xB01A8u:
        case 0xB01BAu:
        case 0xB01BEu:
        case 0xB01C2u:
        case 0xB01E2u:
          break;
        default:
          goto LABEL_22;
      }
    }
    if ( *(_BYTE *)(v4 + 64) && v4 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      ++*(_BYTE *)(v2 + 67);
      *(_QWORD *)(v2 + 184) += 72LL;
      goto LABEL_10;
    }
    goto LABEL_22;
  }
  v13 = *(_DWORD *)(v5 + 16);
  if ( v13 )
  {
    if ( v13 < 2 )
    {
      v16 = -1073741789;
      WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, RemlockSize);
      goto LABEL_26;
    }
    v14 = **(unsigned __int16 **)(v2 + 24);
  }
  else
  {
    v14 = 0LL;
  }
  if ( *(_QWORD *)v4 != *(_QWORD *)(v4 + 8) )
  {
    v16 = -1073741637;
    goto LABEL_26;
  }
  if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > (unsigned int)v14 )
    {
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        if ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v14 + 16)
          || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v14 + 19) )
        {
          v14 = 0LL;
        }
        while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v14 + 16)
             || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v14 + 19) )
        {
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= (unsigned int)v14 )
            goto LABEL_25;
          v14 = (unsigned int)(v14 + 1);
        }
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > (unsigned int)v14 )
      {
        v4 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v14 + 1);
        *(_QWORD *)(v5 + 48) = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v14);
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        goto LABEL_9;
      }
    }
LABEL_25:
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v16 = -1073741811;
LABEL_26:
    *(_DWORD *)(v2 + 48) = v16;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    goto LABEL_11;
  }
LABEL_9:
  v15 = *(_QWORD *)(v2 + 184);
  *(_OWORD *)(v15 - 72) = *(_OWORD *)v15;
  *(_OWORD *)(v15 - 56) = *(_OWORD *)(v15 + 16);
  *(_OWORD *)(v15 - 40) = *(_OWORD *)(v15 + 32);
  *(_QWORD *)(v15 - 24) = *(_QWORD *)(v15 + 48);
  *(_BYTE *)(v15 - 69) = 0;
  *(_BYTE *)(*(_QWORD *)(v2 + 184) - 72LL) = 15;
LABEL_10:
  v16 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), (PIRP)v2);
LABEL_11:
  IoReleaseRemoveLockEx(v6, (PVOID)v2, 0x20u);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v17, 4LL);
  }
  return v16;
}
