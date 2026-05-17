/*
 * XREFs of RtlpAddLanguagesToMultiSZ @ 0x1800E6164
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x1800E6164 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800E75F0 (RtlpMUIGetAllInstalledLang.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x180011690 (RtlpLangNameInMultiSzString.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180082920 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800E6164 (RtlpAddLanguagesToMultiSZ.c)
 */

char __fastcall RtlpAddLanguagesToMultiSZ(
        const void **a1,
        unsigned int *a2,
        unsigned int *a3,
        _WORD *a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int16 a7)
{
  void *Heap; // rax
  unsigned __int16 v11; // bx
  unsigned int v12; // eax
  unsigned __int64 v13; // r8
  void *v14; // rbx
  char *v15; // rsi
  int v16; // edx
  __int64 v17; // r8
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // si
  int v20; // eax
  __int16 *v21; // r9
  char v22; // [rsp+40h] [rbp-61h]
  int v24; // [rsp+50h] [rbp-51h]
  int v27; // [rsp+70h] [rbp-31h] BYREF
  void *Src; // [rsp+78h] [rbp-29h]
  __int64 v29; // [rsp+80h] [rbp-21h]
  unsigned __int64 v30; // [rsp+88h] [rbp-19h]
  __int16 v31; // [rsp+90h] [rbp-11h] BYREF
  __int64 v32; // [rsp+92h] [rbp-Fh]
  __int64 v33; // [rsp+9Ah] [rbp-7h]
  __int64 v34; // [rsp+A2h] [rbp+1h]
  __int16 v35; // [rsp+AAh] [rbp+9h]

  v29 = a5;
  v22 = 1;
  v31 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    v30 = (unsigned __int64)Heap;
    if ( !Heap )
      return v22;
    Src = Heap;
    v27 = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, (__int64)&v27) >= 0 )
    {
      v11 = v27;
      v24 = (unsigned __int16)v27;
      v12 = *a2 + (unsigned __int16)v27 + 2;
      if ( v12 >= (unsigned __int16)v27 && v12 >= *a2 )
      {
        if ( v12 <= *a3 )
          goto LABEL_19;
        v13 = 0LL;
        if ( is_mul_ok(2uLL, *a3) )
          v13 = 2LL * *a3;
        if ( v13 )
        {
          v14 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v13);
          if ( v14 )
          {
            memmove(v14, *a1, *a2);
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)*a1);
            *a1 = v14;
            v11 = v27;
            *a3 *= 2;
LABEL_19:
            v15 = (char *)*a1 + *a2;
            if ( RtlpLangNameInMultiSzString((wchar_t *)*a1, (wchar_t *)Src) )
            {
              v16 = (int)a2;
              v17 = (__int64)a6;
            }
            else
            {
              memmove(v15, Src, v11);
              v16 = (int)a2;
              v17 = (__int64)a6;
              *(_WORD *)&v15[v11] = 0;
              *a2 += v24 + 2;
              ++*a6;
            }
            if ( (*a4 & 0x402) != 0 )
            {
              v18 = 0;
              v19 = 0;
              while ( 1 )
              {
                v20 = ((unsigned __int16)a4[4] >> v19) & 3;
                if ( v20 == 2 )
                  break;
                if ( v20 == 1 )
                {
                  WORD1(v32) = a4[v18 + 6];
                  goto LABEL_30;
                }
                if ( v20 == 3 )
                {
                  WORD2(v32) = a4[v18 + 6];
LABEL_30:
                  v21 = &v31;
LABEL_32:
                  v22 = RtlpAddLanguagesToMultiSZ((_DWORD)a1, v16, (_DWORD)a3, (_DWORD)v21, v29, v17, a7 + 1);
                  if ( !v22 )
                    goto LABEL_34;
                }
                v16 = (int)a2;
                ++v18;
                v17 = (__int64)a6;
                v19 += 2;
                if ( v19 >= 8u )
                  goto LABEL_34;
              }
              v21 = (__int16 *)(*(_QWORD *)(*(_QWORD *)(v29 + 24) + 16LL) + 28LL * (__int16)a4[v18 + 6]);
              goto LABEL_32;
            }
            goto LABEL_34;
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0LL);
        }
      }
    }
LABEL_34:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v30);
    return v22;
  }
  return 0;
}
