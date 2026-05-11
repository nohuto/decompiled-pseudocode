/*
 * XREFs of USBMIDICreateEventPackets @ 0x1C00230DC
 * Callers:
 *     USBMidiOutCreateBulkUrbs @ 0x1C0006714 (USBMidiOutCreateBulkUrbs.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C0005C40 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 */

char __fastcall USBMIDICreateEventPackets(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r10
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int8 *v6; // r14
  __int64 v7; // rbx
  char v8; // r12
  unsigned int v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // r13d
  __int64 v13; // rax
  int v14; // edx
  __int64 v16; // [rsp+28h] [rbp-80h]
  __int64 v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  unsigned int v20; // [rsp+50h] [rbp-58h]
  int v21; // [rsp+50h] [rbp-58h]
  unsigned int *v24; // [rsp+C0h] [rbp+18h]
  bool v25; // [rsp+C8h] [rbp+20h]

  v24 = a3;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = a1;
  v6 = *(unsigned __int8 **)(a2 + 48);
  v20 = *(_DWORD *)(a2 + 36) >> 2;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 136LL);
  v8 = 0;
  v25 = 0;
  if ( !*(_DWORD *)(v7 + 72) )
    goto LABEL_4;
  v25 = (*(_BYTE *)(v4 + 8) & 0xF8) == 0xF8;
  if ( (*(_BYTE *)(v4 + 8) & 0xF8) == 0xF8 )
  {
    *(_BYTE *)(v7 + 68) = 0;
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  *(_DWORD *)v6 = *(_DWORD *)(v7 + 76);
  v9 = *(_DWORD *)(v7 + 72);
LABEL_5:
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(v4 + 4) )
  {
    v12 = v20;
    do
    {
      if ( v11 >= v12 )
        break;
      v8 = 0;
      if ( v9 )
      {
        v21 = 1;
      }
      else
      {
        if ( !*(_BYTE *)(v7 + 69) || (v21 = 0, *(char *)(v10 + v4 + 8) < 0) )
          v21 = 1;
        *v6 = 16 * *(_BYTE *)(v7 + 20);
      }
      do
      {
        if ( v10 >= *(_DWORD *)(v4 + 4) )
          break;
        v13 = v9++;
        LOBYTE(a3) = *(_BYTE *)(v10 + v4 + 8);
        v10 += v21;
        v21 = 1;
        v8 = ((__int64 (__fastcall *)(__int64, unsigned __int8 *, unsigned int *))USBMidiOutCreateByte[v13])(v7, v6, a3);
      }
      while ( !v8 );
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v19) = v6[3];
        LODWORD(v18) = v6[2];
        LODWORD(v17) = v6[1];
        LODWORD(v16) = *v6;
        WPP_RECORDER_SF_DDDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v6[3],
          v6[2],
          v16 & 0xF,
          (__int64)&WPP_240749c47d003b5bf314be79ba5ba17c_Traceguids,
          v16,
          v17,
          v18,
          v19);
      }
      if ( v8 )
        v9 = 0;
      else
        *(_DWORD *)(v7 + 76) = *(_DWORD *)v6;
      v6 += 4;
      ++v11;
    }
    while ( v10 < *(_DWORD *)(v4 + 4) );
    v5 = a1;
    v3 = a2;
    if ( v8 )
    {
      v14 = *(_DWORD *)(v4 + 4);
      if ( v10 == v14 )
      {
        *v24 = *(_DWORD *)(a1 + 44);
      }
      else
      {
        *(_DWORD *)(v10 + *(_QWORD *)(a1 + 32) + 4LL) = v14 - v10;
        *v24 = v10;
      }
      goto LABEL_29;
    }
    a3 = v24;
  }
  --v11;
  *a3 = *(_DWORD *)(v5 + 44);
LABEL_29:
  if ( v25 )
    *(_BYTE *)(v7 + 68) = 1;
  else
    *(_DWORD *)(v7 + 72) = v9;
  *(_DWORD *)(*(_QWORD *)(v3 + 24) + 36LL) += 4 * v11;
  return v8;
}
