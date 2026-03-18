/*
 * XREFs of VidSchCreateContext @ 0x1C0067490
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0011740 (VidSchiDriverNodeEngineToSchedulerNode.c)
 */

__int64 __fastcall VidSchCreateContext(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // r8d
  __int64 v4; // r9
  char v5; // al
  int v6; // edx
  unsigned int v7; // r8d
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int *v11; // r10
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v15; // rax

  if ( a1 && a2 )
  {
    v3 = *a2 & 0xFFFFFFF6 | 8;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 568LL);
    v5 = *(_BYTE *)a2 & 0xF6 | 8;
    *a2 = v3;
    v6 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(16 * ((~v5 & 0x40) != 0))) & 0x10;
    v7 = a2[2];
    v8 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(4 * ((v6 & 0x40) != 0))) & 4;
    v9 = a2[1];
    *a2 = v8;
    v10 = VidSchiDriverNodeEngineToSchedulerNode(*(_QWORD *)(v4 + 32), v9, v7);
    v11[1] = v10;
    return VidSchiCreateContextInternal(v12, v11, v13);
  }
  else
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v15);
    return 0LL;
  }
}
