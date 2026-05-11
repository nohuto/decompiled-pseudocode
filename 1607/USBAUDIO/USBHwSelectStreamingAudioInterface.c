/*
 * XREFs of USBHwSelectStreamingAudioInterface @ 0x1C001CCAC
 * Callers:
 *     USBType1StateChangePin @ 0x1C00049B0 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C0004CC0 (USBType1ChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C0005600 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C0005AA0 (USBCaptureChangePowerState.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C00202E8 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001248 (WPP_RECORDER_SF_qd.c)
 *     memmove @ 0x1C0008040 (memmove.c)
 *     memset @ 0x1C0008380 (memset.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001C4B4 (USBHwSubmitUrbToUsbdSynch.c)
 *     IsZeroBWInterface @ 0x1C001D9BC (IsZeroBWInterface.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterface(__int64 a1, _BYTE *a2)
{
  int v4; // edi
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // r15
  int v8; // ecx
  __int16 v9; // r12
  char *PoolWithTag; // rax
  char *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int i; // edx
  char v15; // al
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rsi
  unsigned int v21; // ecx
  __int64 v22; // r14
  void *v23; // rcx
  PVOID v24; // rax
  __int64 v26; // [rsp+30h] [rbp-48h]
  unsigned __int8 v27; // [rsp+80h] [rbp+8h]
  int v28; // [rsp+90h] [rbp+18h]
  unsigned int v29; // [rsp+98h] [rbp+20h]

  v4 = -1073741808;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD **)(v6 + 72);
  if ( !*(_BYTE *)(v6 + 64) && !*(_BYTE *)(v6 + 67) )
  {
    v27 = IsZeroBWInterface(v7[5]);
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      8u,
      0xAu,
      (__int64)&WPP_82ab15b6abfb34ba956bcf2c53b67e37_Traceguids,
      a1,
      v27);
    v8 = (unsigned __int8)a2[4];
    v28 = v8;
    v9 = 24 * (v8 + 1);
    v29 = 24 * v8 + 56;
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v29, 0x41627845u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_32:
      LODWORD(v26) = v4;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        8u,
        0xBu,
        (__int64)&WPP_82ab15b6abfb34ba956bcf2c53b67e37_Traceguids,
        a1,
        v26);
      return (unsigned int)v4;
    }
    memset(PoolWithTag, 0, v29);
    v12 = v7[5];
    v13 = 0;
    for ( i = *(unsigned __int8 *)(v12 + 4); v13 < i; ++v13 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v7[2] + 16LL * v13) + 2LL) == a2[2] )
        break;
    }
    if ( v13 == i )
      goto LABEL_29;
    v15 = a2[2];
    v16 = *(_QWORD *)(a1 + 16);
    *((_WORD *)v11 + 16) = v9;
    v11[34] = v15;
    v11[35] = a2[3];
    if ( v27 )
    {
      if ( v28 )
        *((_DWORD *)v11 + 18) = 0;
      goto LABEL_17;
    }
    v17 = *(_QWORD *)(v16 + 128);
    v18 = *(_DWORD *)(v17 + 208) & 0xF000;
    switch ( v18 )
    {
      case 0:
        goto LABEL_12;
      case 0x1000:
        *((_DWORD *)v11 + 18) = 3872;
        break;
      case 0x2000:
LABEL_12:
        *((_DWORD *)v11 + 18) = 500 * *(_DWORD *)(v17 + 212);
        if ( !*(_QWORD *)(v17 + 176) )
          *((_DWORD *)v11 + 19) |= 8u;
        break;
    }
LABEL_17:
    *(_WORD *)v11 = v29;
    *((_WORD *)v11 + 1) = 1;
    *((_QWORD *)v11 + 3) = v7[3];
    v19 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v5 + 40), (ULONG_PTR)v11);
    if ( *((int *)v11 + 1) < 0 )
      v19 = -1073741808;
    v4 = v19;
    if ( v19 >= 0 )
    {
      v20 = *(_QWORD *)(v16 + 136);
      if ( !v27 )
      {
        v21 = *((_DWORD *)v11 + 12);
        *(_DWORD *)(v20 + 56) = v21;
        *(_QWORD *)(v20 + 64) = *((_QWORD *)v11 + 8);
        if ( v21 > 0x14 )
        {
          v4 = -1073741438;
        }
        else
        {
          v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
          v23 = *(void **)(v22 + 72);
          if ( v23 )
          {
            ExFreePool(v23);
            *(_QWORD *)(v22 + 72) = 0LL;
          }
          v24 = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * *(unsigned int *)(v20 + 56), 0x41627845u);
          *(_QWORD *)(v20 + 72) = v24;
          if ( !v24 )
            v4 = -1073741670;
        }
        if ( v4 >= 0 )
          memmove(*(void **)(v20 + 72), v11 + 56, 24LL * *(unsigned int *)(v20 + 56));
      }
    }
LABEL_29:
    ExFreePool(v11);
    goto LABEL_31;
  }
  v4 = -1073741632;
LABEL_31:
  if ( v4 < 0 )
    goto LABEL_32;
  return (unsigned int)v4;
}
