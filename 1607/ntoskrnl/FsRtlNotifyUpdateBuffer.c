/*
 * XREFs of FsRtlNotifyUpdateBuffer @ 0x1404AB8A8
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlOemToUnicodeN @ 0x14054A010 (RtlOemToUnicodeN.c)
 */

char __fastcall FsRtlNotifyUpdateBuffer(__int64 a1, int a2, PCCH *a3, PCCH *a4, PCCH *a5, char a6, int a7)
{
  unsigned int v10; // edi
  ULONG v11; // edx
  unsigned __int16 v12; // ax
  WCHAR *v13; // rcx
  const void **v14; // rdx
  __int64 v16; // r8
  __int64 v17; // rdi
  ULONG v18; // ecx
  __int64 v19; // rdi
  ULONG BytesInUnicodeString[5]; // [rsp+34h] [rbp-14h] BYREF

  v10 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = a2;
  v11 = a7 - 12;
  if ( a7 == 12 )
    return 0;
  *(_DWORD *)(a1 + 8) = v11;
  v12 = *(_WORD *)a3;
  if ( !a6 )
  {
    if ( v12 )
    {
      RtlOemToUnicodeN((PWCH)(a1 + 12), v11, BytesInUnicodeString, a3[1], v12);
      v18 = BytesInUnicodeString[0];
      *(_WORD *)(BytesInUnicodeString[0] + a1 + 12) = 92;
      v10 = v18 + 2;
    }
    v13 = (WCHAR *)(v10 + a1 + 12);
    if ( *(_WORD *)a3 )
    {
      RtlOemToUnicodeN(v13, *(_DWORD *)(a1 + 8), BytesInUnicodeString, a4[1], *(unsigned __int16 *)a4);
      if ( a5 )
      {
        v19 = BytesInUnicodeString[0] + v10;
        *(_WORD *)(v19 + a1 + 12) = 58;
        RtlOemToUnicodeN(
          (PWCH)(a1 + (unsigned int)v19 + 14LL),
          *(_DWORD *)(a1 + 8),
          BytesInUnicodeString,
          a5[1],
          *(unsigned __int16 *)a5);
      }
      return 1;
    }
    v14 = (const void **)a5;
    goto LABEL_7;
  }
  if ( v12 )
  {
    memmove((void *)(a1 + 12), a3[1], v12);
    v16 = *(unsigned __int16 *)a3;
    if ( *(unsigned int *)(a1 + 8) < (unsigned __int64)(v16 + 2) )
      return 0;
    *(_WORD *)(v16 + a1 + 12) = 92;
    v10 = *(unsigned __int16 *)a3 + 2;
  }
  memmove((void *)(v10 + a1 + 12), a4[1], *(unsigned __int16 *)a4);
  v14 = (const void **)a5;
  if ( a5 )
  {
    v17 = *(unsigned __int16 *)a4 + v10;
    *(_WORD *)(v17 + a1 + 12) = 58;
    v13 = (WCHAR *)((unsigned int)v17 + a1 + 14);
LABEL_7:
    memmove(v13, v14[1], *(unsigned __int16 *)v14);
  }
  return 1;
}
