/*
 * XREFs of ?SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z @ 0x18007EA94
 * Callers:
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x18007E4D8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800092F0 (-GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z.c)
 *     ?SetValueForKey@?$FixedSizeMap@KUPointer@@$09@@QEAAJAEBKAEBUPointer@@@Z @ 0x18007EF5C (-SetValueForKey@-$FixedSizeMap@KUPointer@@$09@@QEAAJAEBKAEBUPointer@@@Z.c)
 *     ?GetValues@?$FixedSizeMap@KUPointer@@$09@@QEAAJAEAY09UPointer@@PEAI@Z @ 0x18007F04C (-GetValues@-$FixedSizeMap@KUPointer@@$09@@QEAAJAEAY09UPointer@@PEAI@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall InputInfoSanitizer::SanitizePointerInput(
        InputInfoSanitizer *this,
        struct InputInfo *a2,
        struct InputInfoSanitizer::PreviousState *a3)
{
  int *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edi
  int PointerAtIndex; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned int v13; // edx
  _DWORD *v14; // rax
  int v15; // eax
  char v16; // dl
  bool v17; // r8
  int v18; // r10d
  char v19; // al
  unsigned int v20; // r9d
  struct InputInfoSanitizer::PreviousState *v21; // rax
  __int64 v22; // rax
  struct InputInfoSanitizer::PreviousState *v23; // r9
  char v24; // di
  int v25; // r9d
  char v26; // al
  int v27; // r9d
  unsigned int v28; // esi
  __int64 v29; // rdi
  int v30; // r9d
  char v31; // al
  unsigned int v32; // edx
  _DWORD *v33; // rax
  struct InputInfoSanitizer::PreviousState *v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // ebx
  unsigned int v37; // r15d
  __int64 v38; // rdi
  _OWORD *v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rcx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  struct Pointer *v45; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v46[6]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v47[520]; // [rsp+A0h] [rbp-60h] BYREF
  int v48; // [rsp+2A8h] [rbp+1A8h]
  _BYTE v49[480]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v48 = -1;
  memset(v47, 0, sizeof(v47));
  v5 = (int *)v47;
  v6 = 10LL;
  do
  {
    *v5 = v48;
    v5 += 13;
    --v6;
  }
  while ( v6 );
  v7 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    while ( 1 )
    {
      v45 = 0LL;
      PointerAtIndex = GetPointerAtIndex(a2, v7, &v45);
      if ( PointerAtIndex < 0 )
        break;
      v11 = *((_OWORD *)v45 + 1);
      v46[0] = *(_OWORD *)v45;
      v10 = LODWORD(v46[0]);
      v12 = *((_OWORD *)v45 + 2);
      v46[1] = v11;
      v46[2] = v12;
      if ( LODWORD(v46[0]) == v48 )
      {
LABEL_9:
        v15 = DWORD1(v46[0]);
      }
      else
      {
        v13 = 0;
        v14 = v47;
        while ( *v14 != LODWORD(v46[0]) )
        {
          ++v13;
          v14 += 13;
          if ( v13 >= 0xA )
            goto LABEL_9;
        }
        v15 = 4;
        DWORD1(v46[0]) = 4;
      }
      v16 = BYTE4(v46[0]) & 1;
      v17 = (v15 & 2) != 0;
      if ( (v15 & 2) != 0 && !v16 )
      {
        v16 = 1;
        DWORD1(v46[0]) = v15 | 1;
      }
      v18 = *((_DWORD *)a3 + 130);
      if ( LODWORD(v46[0]) == v18 )
      {
LABEL_14:
        v19 = 0;
      }
      else
      {
        v20 = 0;
        v21 = a3;
        while ( *(_DWORD *)v21 != LODWORD(v46[0]) )
        {
          ++v20;
          v21 = (struct InputInfoSanitizer::PreviousState *)((char *)v21 + 52);
          if ( v20 >= 0xA )
            goto LABEL_14;
        }
        v19 = 1;
      }
      if ( v19 )
      {
        if ( LODWORD(v46[0]) == v18 )
        {
          v24 = 87;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v25 = 96;
LABEL_39:
            Template_qqq(LODWORD(v46[0]), &MinInput_Warning_CheckResult, 0, v25, v24);
          }
LABEL_40:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 283, v24);
          goto LABEL_47;
        }
        v22 = 0LL;
        v23 = a3;
        while ( *(_DWORD *)v23 != LODWORD(v46[0]) )
        {
          v22 = (unsigned int)(v22 + 1);
          v23 = (struct InputInfoSanitizer::PreviousState *)((char *)v23 + 52);
          if ( (unsigned int)v22 >= 0xA )
          {
            v24 = 5;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v25 = 113;
              goto LABEL_39;
            }
            goto LABEL_40;
          }
        }
        v26 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)a3 + 52 * v22 + 4), 4));
        if ( (v26 & 1) != 0 || (v26 & 2) != 0 )
          goto LABEL_79;
      }
      if ( v16 || v17 )
      {
LABEL_79:
        PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::SetValueForKey(v47, v45, v46);
        if ( PointerAtIndex < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v27 = 335;
            goto LABEL_46;
          }
LABEL_47:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
      }
      if ( ++v7 >= *((_DWORD *)a2 + 12) )
        goto LABEL_34;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_47;
    v27 = 243;
LABEL_46:
    Template_qqq(v9, &MinInput_Warning_CheckResult, 0, v27, PointerAtIndex);
    goto LABEL_47;
  }
LABEL_34:
  PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::GetValues(a3, v49, &v45);
  if ( PointerAtIndex < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v27 = 344;
      goto LABEL_46;
    }
    goto LABEL_47;
  }
  v28 = (unsigned int)v45;
  v29 = 0LL;
  if ( (_DWORD)v45 )
  {
    while ( 1 )
    {
      v30 = *(_DWORD *)&v49[48 * v29];
      if ( v30 == v48 )
      {
LABEL_52:
        v31 = 0;
      }
      else
      {
        v32 = 0;
        v33 = v47;
        while ( *v33 != v30 )
        {
          ++v32;
          v33 += 13;
          if ( v32 >= 0xA )
            goto LABEL_52;
        }
        v31 = 1;
      }
      if ( (v49[48 * v29 + 4] & 1) != 0 && !v31 )
      {
        *(_DWORD *)&v49[48 * v29 + 4] = 4;
        PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::SetValueForKey(v47, &v49[48 * v29], &v49[48 * v29]);
        if ( PointerAtIndex < 0 )
          break;
      }
      v29 = (unsigned int)(v29 + 1);
      if ( (unsigned int)v29 >= v28 )
        goto LABEL_62;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_47;
    v27 = 366;
    goto LABEL_46;
  }
LABEL_62:
  v34 = a3;
  v35 = 10LL;
  do
  {
    *(_DWORD *)v34 = *((_DWORD *)a3 + 130);
    v34 = (struct InputInfoSanitizer::PreviousState *)((char *)v34 + 52);
    --v35;
  }
  while ( v35 );
  PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::GetValues(v47, v49, &v45);
  v36 = PointerAtIndex;
  if ( PointerAtIndex < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_47;
    v27 = 378;
    goto LABEL_46;
  }
  v37 = (unsigned int)v45;
  v38 = 0LL;
  v39 = v49;
  v40 = a2 - (struct InputInfo *)v49;
  do
  {
    v41 = 48 * v38;
    if ( (unsigned int)v38 >= v37 )
    {
      memset((char *)a2 + v41 + 52, 0, 0x30uLL);
    }
    else
    {
      v42 = v39[1];
      *(_OWORD *)((char *)v39 + v40 + 52) = *v39;
      v43 = v39[2];
      *(_OWORD *)((char *)v39 + v40 + 68) = v42;
      *(_OWORD *)((char *)v39 + v40 + 84) = v43;
      PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::SetValueForKey(a3, &v49[v41], &v49[v41]);
      v36 = PointerAtIndex;
      if ( PointerAtIndex < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_47;
        v27 = 392;
        goto LABEL_46;
      }
    }
    v38 = (unsigned int)(v38 + 1);
    v39 += 3;
  }
  while ( (unsigned int)v38 < 0xA );
  *((_DWORD *)a2 + 12) = v37;
  return v36;
}
