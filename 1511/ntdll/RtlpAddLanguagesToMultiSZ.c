/*
 * XREFs of RtlpAddLanguagesToMultiSZ @ 0x1800DCF34
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x1800DCF34 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800DE3C0 (RtlpMUIGetAllInstalledLang.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpLangNameInMultiSzString @ 0x180068F90 (RtlpLangNameInMultiSzString.c)
 *     RtlpGetNameFromLangInfoNode @ 0x18007F1A0 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800DCF34 (RtlpAddLanguagesToMultiSZ.c)
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
  __int64 v13; // r8
  void *v14; // rbx
  unsigned int *v15; // rcx
  char *v16; // rsi
  int v17; // edx
  __int64 v18; // r8
  unsigned __int16 v19; // bx
  unsigned __int16 v20; // si
  int v21; // eax
  __int16 *v22; // r9
  char v23; // [rsp+40h] [rbp-61h]
  int v26; // [rsp+58h] [rbp-49h]
  int v27; // [rsp+68h] [rbp-39h] BYREF
  void *Src; // [rsp+70h] [rbp-31h]
  unsigned int *v29; // [rsp+78h] [rbp-29h]
  __int64 v30; // [rsp+80h] [rbp-21h]
  unsigned __int64 v31; // [rsp+88h] [rbp-19h]
  __int16 v32; // [rsp+90h] [rbp-11h] BYREF
  __int64 v33; // [rsp+92h] [rbp-Fh]
  __int64 v34; // [rsp+9Ah] [rbp-7h]
  __int64 v35; // [rsp+A2h] [rbp+1h]
  __int16 v36; // [rsp+AAh] [rbp+9h]

  v29 = a3;
  v30 = a5;
  v23 = 1;
  v32 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
    v31 = (unsigned __int64)Heap;
    if ( !Heap )
      return v23;
    Src = Heap;
    v27 = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, (__int64)&v27) >= 0 )
    {
      v11 = v27;
      v26 = (unsigned __int16)v27;
      v12 = *a2 + (unsigned __int16)v27 + 2;
      if ( v12 >= (unsigned __int16)v27 && v12 >= *a2 )
      {
        if ( v12 <= *v29 )
          goto LABEL_19;
        v13 = 0LL;
        if ( is_mul_ok(2uLL, *v29) )
          v13 = 2LL * *v29;
        if ( v13 )
        {
          v14 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v13);
          if ( v14 )
          {
            memmove(v14, *a1, *a2);
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)*a1);
            v15 = v29;
            *a1 = v14;
            v11 = v27;
            *v15 *= 2;
LABEL_19:
            v16 = (char *)*a1 + *a2;
            if ( RtlpLangNameInMultiSzString((wchar_t *)*a1, (wchar_t *)Src) )
            {
              v17 = (int)a2;
              v18 = (__int64)a6;
            }
            else
            {
              memmove(v16, Src, v11);
              v17 = (int)a2;
              v18 = (__int64)a6;
              *(_WORD *)&v16[v11] = 0;
              *a2 += v26 + 2;
              ++*a6;
            }
            if ( (*a4 & 0x402) != 0 )
            {
              v19 = 0;
              v20 = 0;
              while ( 1 )
              {
                v21 = ((unsigned __int16)a4[4] >> v20) & 3;
                if ( v21 == 2 )
                  break;
                if ( v21 == 1 )
                {
                  WORD1(v33) = a4[v19 + 6];
                  goto LABEL_30;
                }
                if ( v21 == 3 )
                {
                  WORD2(v33) = a4[v19 + 6];
LABEL_30:
                  v22 = &v32;
LABEL_32:
                  v23 = RtlpAddLanguagesToMultiSZ((_DWORD)a1, v17, (_DWORD)v29, (_DWORD)v22, v30, v18, a7 + 1);
                  if ( !v23 )
                    goto LABEL_34;
                }
                v17 = (int)a2;
                ++v19;
                v18 = (__int64)a6;
                v20 += 2;
                if ( v20 >= 8u )
                  goto LABEL_34;
              }
              v22 = (__int16 *)(*(_QWORD *)(*(_QWORD *)(v30 + 24) + 16LL) + 28LL * (__int16)a4[v19 + 6]);
              goto LABEL_32;
            }
            goto LABEL_34;
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0LL);
        }
      }
    }
LABEL_34:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v31);
    return v23;
  }
  return 0;
}
