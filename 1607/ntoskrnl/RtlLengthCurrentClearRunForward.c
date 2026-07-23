/*
 * XREFs of RtlLengthCurrentClearRunForward @ 0x14001A510
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x140019FE0 (MiCoalescePageFileBitmapsCache.c)
 *     MiCheckHintedPageFileSpace @ 0x1400B4A18 (MiCheckHintedPageFileSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForward(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r8
  _DWORD *v5; // r10
  _DWORD *v6; // r8
  int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // eax
  bool v11; // zf
  int v12; // ecx
  __int64 result; // rax
  char v14; // r8

  v4 = *(_QWORD *)(a1 + 8);
  v5 = (_DWORD *)(v4 + 4 * ((unsigned __int64)a2 >> 5));
  v6 = (_DWORD *)(v4 + 4 * ((unsigned __int64)(unsigned int)(*(_DWORD *)a1 - 1) >> 5));
  v7 = *(_DWORD *)a1 & 0x1F;
  if ( v7 )
    --v6;
  v8 = a2 & 0x1F;
  LODWORD(v9) = ~dword_14026D390[v8] & *v5;
  v10 = 0;
  if ( v5 > v6 )
  {
LABEL_18:
    if ( v7 )
    {
      if ( v10 )
        LODWORD(v9) = v5[1];
      v14 = -1;
      v11 = !_BitScanForward64((unsigned __int64 *)&v9, (unsigned int)v9 | ~dword_14026D390[*(_DWORD *)a1 & 0x1F]);
      if ( !v11 )
        v14 = v9;
      v12 = v14;
      goto LABEL_8;
    }
  }
  else
  {
    if ( (_DWORD)v9 )
    {
LABEL_5:
      v11 = !_BitScanForward64((unsigned __int64 *)&v9, (unsigned int)v9);
      if ( v11 )
        LOBYTE(v9) = -1;
      v12 = (char)v9;
LABEL_8:
      v10 += v12;
      goto LABEL_9;
    }
    while ( 1 )
    {
      v10 += 32;
      if ( v10 >= a3 && v10 - (unsigned int)v8 >= a3 )
        break;
      if ( v5 == v6 )
        goto LABEL_18;
      LODWORD(v9) = v5[1];
      ++v5;
      if ( (_DWORD)v9 )
        goto LABEL_5;
    }
  }
LABEL_9:
  result = v10 - (unsigned int)v8;
  if ( (unsigned int)result > a3 )
    return a3;
  return result;
}
