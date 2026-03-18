/*
 * XREFs of EtwpComputeRegEntryEnableInfo @ 0x14046C714
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404CCFEC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x1404CE210 (EtwpCalculateUpdateNotification.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall EtwpComputeRegEntryEnableInfo(__int64 a1, unsigned __int8 *a2)
{
  int v2; // edi
  unsigned __int8 v4; // bp
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // ecx
  char *v8; // rbx
  __int64 result; // rax
  unsigned __int8 v10; // al
  unsigned __int8 v11; // dl
  unsigned int v12; // edx
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
  v8 = (char *)(v5 + 116);
  do
  {
    result = (unsigned __int8)v7;
    if ( _bittest(&v2, (unsigned __int8)v7) )
    {
      v10 = a2[4];
      *(_DWORD *)a2 = 1;
      v11 = *v8;
      if ( v10 > (unsigned __int8)*v8 )
        v11 = v10;
      a2[4] = v11;
      *((_QWORD *)a2 + 2) |= *(_QWORD *)(v8 + 12);
      *((_QWORD *)a2 + 3) &= *(_QWORD *)(v8 + 20);
      result = *((unsigned int *)v8 + 1);
      *((_DWORD *)a2 + 2) |= result;
    }
    ++v7;
    v8 += 32;
  }
  while ( v7 < 8 );
  if ( v4 )
  {
    v12 = 0;
    v13 = v4;
    v14 = (char *)(v6 + 116);
    do
    {
      result = (unsigned __int8)v12;
      if ( _bittest(&v13, (unsigned __int8)v12) && *((_DWORD *)v14 - 1) )
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
      ++v12;
      v14 += 32;
    }
    while ( v12 < 8 );
  }
  return result;
}
