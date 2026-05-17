/*
 * XREFs of RtlFindActivationContextSectionGuid @ 0x180024380
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     RtlpFindFirstActivationContextSection @ 0x180021628 (RtlpFindFirstActivationContextSection.c)
 *     RtlpFindGuidInSection @ 0x180024570 (RtlpFindGuidInSection.c)
 *     RtlpFindNextActivationContextSection @ 0x1800253C0 (RtlpFindNextActivationContextSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x180025980 (RtlpFindActivationContextSection_CheckParameters.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180070D78 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlFindActivationContextSectionGuid(int a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  struct _TEB *v5; // r10
  _PEB *ProcessEnvironmentBlock; // rax
  __int64 result; // rax
  unsigned int v12; // esi
  _DWORD *v13; // rdi
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // r15
  _BYTE v16[4]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-3Ch] BYREF
  _DWORD *v18; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v20[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+70h] [rbp-10h]

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return 3222601729LL;
  }
  v17 = 0;
  v19 = 0LL;
  result = RtlpFindActivationContextSection_CheckParameters(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    v20[1] = 0;
    v23 = 0;
    v20[0] = 32;
    v21 = a2;
    v22 = a3;
    result = RtlpFindFirstActivationContextSection(v20, (__int64)&v18, (__int64)&v17, &v19);
    if ( (int)result >= 0 )
    {
      v12 = v17;
      if ( v17 < 0x28 )
      {
LABEL_26:
        v13 = v18;
      }
      else
      {
        while ( 1 )
        {
          v13 = v18;
          if ( *v18 != 1682469703 )
            break;
          result = RtlpFindGuidInSection(v18, a4, a5);
          if ( (int)result >= 0 )
          {
            v14 = v19;
            if ( ((v19 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
            {
              v15 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v19 + 32);
              if ( v15 )
              {
                if ( (*(_BYTE *)(v19 + 48) & 8) == 0 || (*(_BYTE *)(v19 + 80) & 8) == 0 )
                {
                  v16[0] = 0;
                  v15(3LL, v19, *(_QWORD *)(v19 + 24), *(_QWORD *)(v19 + 40), 0LL, v16);
                  *(_DWORD *)(v14 + 48) |= 8u;
                  if ( v16[0] )
                    *(_DWORD *)(v14 + 80) |= 8u;
                }
              }
            }
            if ( !a5 )
              return 0LL;
            result = RtlpFindActivationContextSection_FillOutReturnedData(
                       a1,
                       a5,
                       v14,
                       (unsigned int)v20,
                       (__int64)v13,
                       v13[8],
                       v13[9],
                       v12);
            if ( (int)result >= 0 )
              return 0LL;
            return result;
          }
          if ( (_DWORD)result != -1072365560 )
            return result;
          result = RtlpFindNextActivationContextSection(v20, &v18, &v17, &v19);
          if ( (int)result < 0 )
          {
            if ( (_DWORD)result == -1072365567 )
              return 3222601736LL;
            return result;
          }
          v12 = v17;
          if ( v17 < 0x28 )
            goto LABEL_26;
        }
      }
      DbgPrintEx(
        51,
        0,
        "RtlFindActivationContextSectionGuid() found section at %p (length %lu) which is not a GUID section\n",
        v13,
        v12);
      return 3222601731LL;
    }
  }
  return result;
}
