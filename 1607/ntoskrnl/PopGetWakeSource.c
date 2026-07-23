/*
 * XREFs of PopGetWakeSource @ 0x1405333F8
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopDereferenceWakeInfos @ 0x140125D14 (PopDereferenceWakeInfos.c)
 *     PopGetCurrentWakeInfos @ 0x140125D94 (PopGetCurrentWakeInfos.c)
 *     PopCopyWakeSource @ 0x14066E1D4 (PopCopyWakeSource.c)
 *     PopWakeSourceSize @ 0x14066E680 (PopWakeSourceSize.c)
 */

__int64 __fastcall PopGetWakeSource(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r13
  unsigned __int64 v3; // rbp
  _DWORD *v4; // rdi
  unsigned int CurrentWakeInfos; // eax
  __int64 v6; // rdx
  _QWORD *v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // r10
  _QWORD *v11; // r11
  _QWORD *v12; // r8
  unsigned int v13; // edi
  __int64 v15; // rbp
  __int64 v16; // r14
  _QWORD *v17; // r15
  _DWORD *v18; // r12
  __int64 v19; // rcx
  _DWORD *v20; // r13
  _QWORD *v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // r8
  _DWORD *v24; // rdi
  _QWORD *v25; // r14
  unsigned __int64 v26; // rbp
  __int64 v27; // [rsp+30h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp+8h]
  unsigned int v30; // [rsp+B0h] [rbp+18h]
  _QWORD *v31; // [rsp+B8h] [rbp+20h] BYREF

  v28 = (int)a1;
  v31 = 0LL;
  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( (_DWORD)v3 && !a1 )
    return 3221225485LL;
  KeWaitForSingleObject(&PopWakeSourceAvailable, Executive, 0, 0, 0LL);
  CurrentWakeInfos = PopGetCurrentWakeInfos(&v31);
  v8 = CurrentWakeInfos;
  v30 = CurrentWakeInfos;
  v9 = (int)(4 * CurrentWakeInfos + 4);
  if ( CurrentWakeInfos )
  {
    v7 = v31;
    v10 = CurrentWakeInfos;
    do
    {
      v6 = *v7;
      v11 = (_QWORD *)(*v7 + 24LL);
      v12 = (_QWORD *)*v11;
      v9 = 4 * *(_DWORD *)(*v7 + 40LL) + 4 + ((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      while ( v12 != v11 )
      {
        v22 = PopWakeSourceSize(v12);
        v12 = (_QWORD *)*v23;
        v9 = v22 + ((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      ++v7;
      --v10;
    }
    while ( v10 );
  }
  if ( v9 <= v3 )
  {
    *v4 = v8;
    v27 = v8;
    v15 = (__int64)&v4[v8 + 1];
    v16 = v8;
    if ( (_DWORD)v8 )
    {
      v17 = v31;
      v18 = v4 + 1;
      do
      {
        v19 = *v17;
        v20 = (_DWORD *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *v20 = *(_DWORD *)(*v17 + 40LL);
        *v18 = ((v15 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
        v15 = (__int64)&v20[*(unsigned int *)(v19 + 40) + 1];
        v21 = *(_QWORD **)(v19 + 24);
        if ( v21 != (_QWORD *)(v19 + 24) )
        {
          v24 = v20 + 1;
          v25 = (_QWORD *)(v19 + 24);
          do
          {
            v26 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            *v24++ = v26 - (_DWORD)v20;
            PopCopyWakeSource(v26, v6, v21, v7);
            v21 = (_QWORD *)*v21;
            v15 = *(unsigned int *)(v26 + 4) + v26;
          }
          while ( v21 != v25 );
          LODWORD(v4) = v28;
          v16 = v27;
        }
        ++v17;
        ++v18;
        v27 = --v16;
      }
      while ( v16 );
      LODWORD(v8) = v30;
      v2 = a2;
    }
    v13 = 0;
  }
  else
  {
    v13 = -1073741789;
  }
  if ( (_DWORD)v8 )
    PopDereferenceWakeInfos(v8, v31);
  *v2 = v9;
  return v13;
}
