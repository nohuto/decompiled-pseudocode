/*
 * XREFs of EtwpComputeRegEntryEnableInfo @ 0x1404927B0
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140409D90 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040D4A0 (EtwpRegisterUMGuid.c)
 *     EtwpCalculateUpdateNotification @ 0x140491A90 (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
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
  unsigned int v10; // edx
  int v11; // r9d
  char *v12; // rcx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r8

  v2 = *(unsigned __int8 *)(a1 + 100);
  v4 = *(_BYTE *)(a1 + 101);
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
      v13 = a2[4];
      *(_DWORD *)a2 = 1;
      v14 = *v8;
      if ( v13 > (unsigned __int8)*v8 )
        v14 = v13;
      a2[4] = v14;
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
    v10 = 0;
    v11 = v4;
    v12 = (char *)(v6 + 116);
    do
    {
      result = (unsigned __int8)v10;
      if ( _bittest(&v11, (unsigned __int8)v10) && *((_DWORD *)v12 - 1) )
      {
        v15 = a2[4];
        *(_DWORD *)a2 = 1;
        v16 = *v12;
        if ( v15 > (unsigned __int8)*v12 )
          v16 = v15;
        a2[4] = v16;
        *((_QWORD *)a2 + 2) |= *(_QWORD *)(v12 + 12);
        *((_QWORD *)a2 + 3) &= *(_QWORD *)(v12 + 20);
        result = *((unsigned int *)v12 + 1);
        *((_DWORD *)a2 + 2) |= result;
      }
      ++v10;
      v12 += 32;
    }
    while ( v10 < 8 );
  }
  return result;
}
