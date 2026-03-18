/*
 * XREFs of VidSchCreateContext @ 0x1C005FA70
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0013D98 (VidSchiDriverNodeEngineToSchedulerNode.c)
 */

__int64 __fastcall VidSchCreateContext(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r8d
  __int64 v6; // r9
  char v7; // al
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // eax
  int v11; // edx
  unsigned int v12; // eax
  unsigned int *v13; // r10
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v17; // rax

  if ( a1 && a2 )
  {
    v5 = *a2 & 0xFFFFFFF6 | 8;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 544LL);
    v7 = *(_BYTE *)a2 & 0xF6 | 8;
    *a2 = v5;
    v8 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(16 * ((~v7 & 0x40) != 0))) & 0x10;
    v9 = a2[2];
    v10 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(4 * ((v8 & 0x40) != 0))) & 4;
    v11 = a2[1];
    *a2 = v10;
    v12 = VidSchiDriverNodeEngineToSchedulerNode(*(_QWORD *)(v6 + 32), v11, v9);
    v13[1] = v12;
    return VidSchiCreateContextInternal(v14, v13, v15);
  }
  else
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
    return 0LL;
  }
}
