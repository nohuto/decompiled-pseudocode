/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1800678B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x18006823C (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180068268 (RtlpAtomMapAtomToHandleEntry.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1800A1410 (_snwprintf_s.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     EvaluateCurrentState @ 0x1800E2A90 (EvaluateCurrentState.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  unsigned int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int16 *v19; // rax
  unsigned int v20; // eax
  wchar_t Buffer[16]; // [rsp+48h] [rbp-60h] BYREF

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v10 = *a6 & 0xFFFFFFFE;
  if ( a2 < 0xC000u )
  {
    if ( !a2 )
    {
      v11 = -1073741811;
LABEL_39:
      v16 = a1;
      goto LABEL_40;
    }
    v11 = 0;
    if ( a3 )
      *a3 = 1;
    if ( a4 )
      *a4 = 1;
    if ( !a5 )
      goto LABEL_39;
    v12 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", a2);
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_1399796027_59803018_FeatureDescriptorDetails) )
    {
      if ( v12 >= v10 )
      {
        if ( v10 >= 2 )
        {
          v13 = v10 - 2;
LABEL_18:
          v12 = v13;
          goto LABEL_20;
        }
        goto LABEL_19;
      }
    }
    else
    {
      v14 = *a6;
      if ( v12 >= *a6 )
      {
        if ( v14 >= 2 )
        {
          v13 = v14 - 2;
          goto LABEL_18;
        }
LABEL_19:
        v12 = 0;
      }
    }
LABEL_20:
    if ( !v12 )
    {
      v11 = -1073741789;
      goto LABEL_39;
    }
    memmove(a5, Buffer, v12);
    v15 = (unsigned __int64)v12 >> 1;
    goto LABEL_22;
  }
  v11 = -1073741816;
  v16 = a1;
  v17 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
  v18 = v17;
  if ( !v17 )
    goto LABEL_40;
  if ( *(_WORD *)(v17 + 10) != a2 )
    goto LABEL_40;
  v19 = (unsigned __int16 *)(v17 + 12);
  if ( !v19 )
    goto LABEL_40;
  v11 = 0;
  if ( a3 )
    *a3 = *v19;
  if ( a4 )
    *a4 = *(unsigned __int16 *)(v18 + 14);
  if ( !a5 )
    goto LABEL_40;
  v12 = 2 * *(unsigned __int8 *)(v18 + 16);
  v20 = *a6;
  if ( v12 >= *a6 )
  {
    if ( v20 < 2 )
    {
      *a6 = v12;
      v12 = 0;
    }
    else
    {
      v12 = v20 - 2;
    }
  }
  if ( v12 )
  {
    memmove(a5, (const void *)(v18 + 18), v12);
    v15 = (unsigned __int64)v12 >> 1;
LABEL_22:
    *((_WORD *)a5 + v15) = 0;
    *a6 = v12;
    goto LABEL_39;
  }
  v11 = -1073741789;
LABEL_40:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v16 + 8));
  return v11;
}
