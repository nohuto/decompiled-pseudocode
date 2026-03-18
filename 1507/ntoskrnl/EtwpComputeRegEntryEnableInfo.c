/*
 * XREFs of EtwpComputeRegEntryEnableInfo @ 0x1404D345C
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x1404D5734 (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall EtwpComputeRegEntryEnableInfo(__int64 a1, unsigned __int8 *a2)
{
  int v2; // edi
  unsigned __int8 v4; // bp
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // edx
  unsigned int v8; // ecx
  char *v9; // rbx
  __int64 result; // rax
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r8
  int v13; // r9d
  char *v14; // rcx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r8

  v2 = *(unsigned __int8 *)(a1 + 99);
  v4 = *(_BYTE *)(a1 + 100);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 40);
  memset(a2, 0, 0x20uLL);
  *((_QWORD *)a2 + 3) = -1LL;
  v7 = 0;
  v8 = 0;
  v9 = (char *)(v5 + 116);
  do
  {
    result = (unsigned __int8)v8;
    if ( _bittest(&v2, (unsigned __int8)v8) )
    {
      v11 = a2[4];
      *(_DWORD *)a2 = 1;
      v12 = *v9;
      if ( v11 > (unsigned __int8)*v9 )
        v12 = v11;
      a2[4] = v12;
      *((_QWORD *)a2 + 2) |= *(_QWORD *)(v9 + 12);
      *((_QWORD *)a2 + 3) &= *(_QWORD *)(v9 + 20);
      result = *((unsigned int *)v9 + 1);
      *((_DWORD *)a2 + 2) |= result;
    }
    ++v8;
    v9 += 32;
  }
  while ( v8 < 8 );
  if ( v4 )
  {
    v13 = v4;
    v14 = (char *)(v6 + 116);
    do
    {
      result = (unsigned __int8)v7;
      if ( _bittest(&v13, (unsigned __int8)v7) )
      {
        v15 = a2[4];
        *(_DWORD *)a2 = 1;
        v16 = *v14;
        if ( v15 > (unsigned __int8)*v14 )
          v16 = v15;
        a2[4] = v16;
        *((_QWORD *)a2 + 2) |= *(_QWORD *)(v14 + 12);
        *((_QWORD *)a2 + 3) &= *(_QWORD *)(v14 + 20);
        result = *((unsigned int *)v14 + 1);
        *((_DWORD *)a2 + 2) |= result;
      }
      ++v7;
      v14 += 32;
    }
    while ( v7 < 8 );
  }
  return result;
}
