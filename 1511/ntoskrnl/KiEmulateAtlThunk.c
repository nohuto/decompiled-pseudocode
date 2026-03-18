/*
 * XREFs of KiEmulateAtlThunk @ 0x1401CCAE0
 * Callers:
 *     KiPreprocessFault @ 0x14002315C (KiPreprocessFault.c)
 * Callees:
 *     MmCheckForSafeExecution @ 0x140625D80 (MmCheckForSafeExecution.c)
 */

__int64 __fastcall KiEmulateAtlThunk(unsigned int *a1, _DWORD *a2, unsigned int *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int *v5; // r14
  __int64 v10; // rbx
  _WORD *v11; // rax
  char v12; // di
  unsigned int v13; // r14d
  _DWORD *v14; // rcx
  char v15; // al
  unsigned int v16; // r15d
  unsigned int v17; // edi
  unsigned int *v18; // rdi
  _DWORD *v19; // rcx
  ULONG64 v20; // rdx
  unsigned int v21; // r13d
  char v22; // [rsp+20h] [rbp-38h]
  unsigned int v23; // [rsp+24h] [rbp-34h]
  unsigned __int64 v24; // [rsp+30h] [rbp-28h]

  v5 = a4;
  if ( (KeGetCurrentThread()->ApcState.Process->Flags.ExecuteOptionsNV & 4) != 0 )
    return 0LL;
  v10 = *a1;
  v24 = (unsigned int)*a2;
  v23 = 0;
  v11 = (_WORD *)&KeGetPcr()->NtTib.$0C91CFB10D28D41C3392B7C54F9CA6F4::$3E0F0F6D91C5C9A349763DE49766E812::Self[218].SubSystemTib
      + 1;
  if ( (*v11 & 1) != 0 )
  {
    v12 = 1;
    v22 = 1;
    *v11 &= ~1u;
  }
  else
  {
    v12 = 0;
    v22 = 0;
  }
  if ( *(_DWORD *)v10 == 69485767 && *(_BYTE *)(v10 + 8) == 0xE9 )
  {
    v13 = *(_DWORD *)(v10 + 9) + v10 + 13;
    LOBYTE(a4) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v24, v13, a4, v22) || !v12 )
      return v23;
    v14 = (_DWORD *)(v24 + 4);
    if ( v24 + 4 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *(_DWORD *)(v10 + 4);
    *a1 = v13;
    return 1;
  }
  v15 = *(_BYTE *)v10;
  if ( *(_BYTE *)v10 == 0xB9 && *(_BYTE *)(v10 + 5) == 0xE9 )
  {
    v16 = *(_DWORD *)(v10 + 6) + v10 + 10;
    LOBYTE(a4) = 1;
    if ( !(unsigned __int8)MmCheckForSafeExecution(v10, v24, v16, a4, v22) || !v12 )
      return v23;
    *v5 = *(_DWORD *)(v10 + 1);
    goto LABEL_31;
  }
  if ( v15 == -70 && *(_BYTE *)(v10 + 5) == 0xB9 && *(_WORD *)(v10 + 10) == 0xE1FF )
  {
    v17 = *(_DWORD *)(v10 + 6);
    if ( (unsigned __int8)MmCheckForSafeExecution(v10, v24, v17, 0LL, v22) )
    {
      *a5 = *(_DWORD *)(v10 + 1);
      *v5 = v17;
      *a1 = v17;
      return 1;
    }
  }
  else
  {
    if ( v15 != -71 || *(_BYTE *)(v10 + 5) != 0xB8 || *(_WORD *)(v10 + 10) != 0xE0FF )
    {
      if ( v15 == 89
        && *(_BYTE *)(v10 + 1) == 88
        && *(_BYTE *)(v10 + 2) == 81
        && *(_BYTE *)(v10 + 3) == 0xFF
        && *(_BYTE *)(v10 + 4) == 96
        && *(_BYTE *)(v10 + 5) == 4 )
      {
        v18 = (unsigned int *)(v24 + 4);
        v19 = (_DWORD *)(v24 + 4);
        if ( v24 + 4 >= MmUserProbeAddress )
          v19 = (_DWORD *)MmUserProbeAddress;
        v20 = (unsigned int)(*v19 + 4);
        if ( v20 >= MmUserProbeAddress )
          v20 = MmUserProbeAddress;
        v21 = *(_DWORD *)v20;
        if ( (unsigned __int8)MmCheckForSafeExecution(v10, v24, *(unsigned int *)v20, 0LL, v22) )
        {
          *v5 = *(_DWORD *)v24;
          *a3 = *v18;
          *v18 = *v5;
          *a1 = v21;
          *a2 = (_DWORD)v18;
          return 1;
        }
      }
      return v23;
    }
    v16 = *(_DWORD *)(v10 + 6);
    LOBYTE(a4) = 1;
    if ( (unsigned __int8)MmCheckForSafeExecution(v10, v24, v16, a4, v22) && v12 )
    {
      *v5 = *(_DWORD *)(v10 + 1);
      *a3 = v16;
LABEL_31:
      *a1 = v16;
      return 1;
    }
  }
  return v23;
}
