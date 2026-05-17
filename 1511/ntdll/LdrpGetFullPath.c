/*
 * XREFs of LdrpGetFullPath @ 0x18000C3E0
 * Callers:
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     LdrpPreprocessDllName @ 0x1800121A0 (LdrpPreprocessDllName.c)
 *     LdrpApplyFileNameRedirection @ 0x180012354 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall LdrpGetFullPath(__int64 a1, __int64 a2)
{
  unsigned int FullPathName_Ustr; // eax
  unsigned int v5; // ebx
  __int16 v6; // si
  _WORD *StringRoutine; // r14
  char v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+74h] [rbp+1Ch]
  char v12; // [rsp+78h] [rbp+20h] BYREF

  FullPathName_Ustr = RtlGetFullPathName_Ustr(a1, *(unsigned __int16 *)(a2 + 2), *(_QWORD *)(a2 + 8), &v12, &v9, &v10);
  v5 = 0;
  while ( 1 )
  {
    v6 = FullPathName_Ustr;
    if ( v9 )
      break;
    if ( !FullPathName_Ustr || FullPathName_Ustr > 0xFFFE )
      return (unsigned int)-1073741562;
    if ( v10 == 5 && (LdrpIllegalCWDDevices & v11) != 0 )
      break;
    if ( FullPathName_Ustr < *(unsigned __int16 *)(a2 + 2) )
    {
      *(_WORD *)a2 = FullPathName_Ustr;
      return v5;
    }
    StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(FullPathName_Ustr);
    if ( !StringRoutine )
      return (unsigned int)-1073741801;
    if ( a2 + 16 != *(_QWORD *)(a2 + 8) )
      NtdllpFreeStringRoutine();
    *(_WORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = StringRoutine;
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = v6;
    *StringRoutine = 0;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a1, *(unsigned __int16 *)(a2 + 2), *(_QWORD *)(a2 + 8), &v12, &v9, &v10);
  }
  return (unsigned int)-1073741515;
}
