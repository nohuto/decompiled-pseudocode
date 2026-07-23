/*
 * XREFs of MiAddPhysicalPagesToCrashDump @ 0x1401E7350
 * Callers:
 *     MmGetDumpRange @ 0x1401E79D4 (MmGetDumpRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAddPhysicalPagesToCrashDump(void (__fastcall **a1)(_QWORD, __int64, __int64))
{
  _DWORD *v1; // rdx
  int v2; // edi
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // rbx
  char v7; // cl
  unsigned __int64 v8; // rcx
  __int64 result; // rax

  v1 = MmPhysicalMemoryBlock;
  v2 = 0;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    while ( 1 )
    {
      v4 = 0;
      v5 = *(_QWORD *)&v1[4 * v2 + 4];
      if ( *(_QWORD *)&v1[4 * v2 + 6] )
        break;
LABEL_14:
      if ( (unsigned int)++v2 >= *v1 )
        return result;
    }
    v6 = 48 * v5 - 0x57FFFFFFFDELL;
    while ( 1 )
    {
      if ( (*(_BYTE *)v6 & 0xC0) == 0x40 )
      {
        v7 = *(_BYTE *)v6 & 7;
        if ( v7 == 6 )
        {
          v8 = *(_QWORD *)(v6 + 6);
          if ( ((v8 >> 54) & 7) == 1
            || (*(_QWORD *)(v6 - 10) & 0x3FFFFFFFFFFFFFFFLL) == 1 && (v8 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          {
            goto LABEL_13;
          }
        }
        else if ( (unsigned __int8)(v7 - 2) > 1u || (*(_DWORD *)(v6 - 18) & 0x400LL) != 0 )
        {
          goto LABEL_13;
        }
        (*a1)(a1, v5, 1LL);
        v1 = MmPhysicalMemoryBlock;
      }
LABEL_13:
      ++v4;
      ++v5;
      result = v4;
      v6 += 48LL;
      if ( (unsigned __int64)v4 >= *(_QWORD *)&v1[4 * v2 + 6] )
        goto LABEL_14;
    }
  }
  return result;
}
