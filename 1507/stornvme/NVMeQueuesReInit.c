/*
 * XREFs of NVMeQueuesReInit @ 0x1C0004044
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0004E88 (NVMeControllerReset.c)
 * Callees:
 *     memset @ 0x1C000EE00 (memset.c)
 */

unsigned __int64 __fastcall NVMeQueuesReInit(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  void *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  void *v8; // rcx
  int v9; // eax
  unsigned __int64 result; // rax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rcx
  bool v15; // zf
  void *v16; // rcx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rcx
  void *v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx

  v1 = (_DWORD *)(a1 + 656);
  *(_DWORD *)(a1 + 552) = 0;
  v3 = 4LL;
  do
  {
    *v1 = 0;
    v1 += 26;
    --v3;
  }
  while ( v3 );
  v4 = *(void **)(a1 + 232);
  *(_DWORD *)(a1 + 276) = 0;
  *(_WORD *)(a1 + 280) = 0;
  *(_WORD *)(a1 + 360) = 0;
  if ( *(_WORD *)(a1 + 272) )
    v5 = *(unsigned __int16 *)(a1 + 222);
  else
    v5 = *(unsigned __int16 *)(a1 + 220);
  v6 = v5 << 6;
  if ( (v6 & 3) != 0 )
  {
    if ( v6 )
      memset(v4, 0, v6);
  }
  else
  {
    v7 = v6 >> 2;
    if ( v7 )
      memset(v4, 0, 4LL * v7);
  }
  v8 = *(void **)(a1 + 368);
  *(_DWORD *)(a1 + 466) = 0;
  if ( *(_WORD *)(a1 + 464) )
    v9 = *(unsigned __int16 *)(a1 + 222);
  else
    v9 = *(unsigned __int16 *)(a1 + 220);
  result = (unsigned int)(16 * v9);
  if ( (result & 3) != 0 )
  {
    if ( (_DWORD)result )
      result = (unsigned __int64)memset(v8, 0, (unsigned int)result);
  }
  else
  {
    result = (unsigned int)result >> 2;
    if ( (_DWORD)result )
      result = (unsigned __int64)memset(v8, 0, 4LL * (unsigned int)result);
  }
  v11 = 0;
  if ( *(_WORD *)(a1 + 220) )
  {
    do
    {
      v12 = *(_QWORD *)(a1 + 264);
      if ( *(_QWORD *)(v12 + 16LL * v11) )
        *(_QWORD *)(v12 + 16LL * v11) = 0LL;
      result = *(unsigned __int16 *)(a1 + 220);
      ++v11;
    }
    while ( v11 < (unsigned int)result );
  }
  v13 = 0;
  if ( *(_WORD *)(a1 + 224) )
  {
    do
    {
      v14 = *(_QWORD *)(a1 + 536) + 136LL * v13;
      v15 = *(_WORD *)(v14 + 40) == 0;
      *(_DWORD *)(v14 + 44) = 0;
      *(_WORD *)(v14 + 48) = 0;
      *(_WORD *)(v14 + 128) = 0;
      v16 = *(void **)v14;
      if ( v15 )
        v17 = *(unsigned __int16 *)(a1 + 220);
      else
        v17 = *(unsigned __int16 *)(a1 + 222);
      v18 = v17 << 6;
      if ( (v18 & 3) != 0 )
      {
        if ( v18 )
          memset(v16, 0, v18);
      }
      else
      {
        v19 = v18 >> 2;
        if ( v19 )
          memset(v16, 0, 4LL * v19);
      }
      result = *(unsigned __int16 *)(a1 + 224);
      ++v13;
    }
    while ( v13 < (unsigned int)result );
  }
  v20 = 0;
  if ( *(_WORD *)(a1 + 226) )
  {
    do
    {
      v21 = *(_QWORD *)(a1 + 544) + 168LL * v20;
      v15 = *(_WORD *)(v21 + 96) == 0;
      *(_DWORD *)(v21 + 98) = 0;
      v22 = *(void **)v21;
      if ( v15 )
        v23 = *(unsigned __int16 *)(a1 + 220);
      else
        v23 = *(unsigned __int16 *)(a1 + 222);
      v24 = 16 * v23;
      if ( (v24 & 3) != 0 )
      {
        if ( v24 )
          memset(v22, 0, v24);
      }
      else
      {
        v25 = v24 >> 2;
        if ( v25 )
          memset(v22, 0, 4LL * v25);
      }
      result = *(unsigned __int16 *)(a1 + 226);
      ++v20;
    }
    while ( v20 < (unsigned int)result );
  }
  v26 = 0;
  if ( *(_WORD *)(a1 + 154) )
  {
    do
    {
      v27 = v26++;
      *(_QWORD *)(32 * v27 + *(_QWORD *)(a1 + 184) + 24) = 0LL;
      result = *(unsigned __int16 *)(a1 + 154);
    }
    while ( v26 < (unsigned int)result );
  }
  return result;
}
