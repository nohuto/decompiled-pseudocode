/*
 * XREFs of ?SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z @ 0x180027F84
 * Callers:
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 *     ?CreateResourcePolicy@ResourcePolicyStore@ExecutionModel@@UEAAJQEBGKPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x18004C400 (-CreateResourcePolicy@ResourcePolicyStore@ExecutionModel@@UEAAJQEBGKPEBU_ResourcePolicyDetails@@.c)
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180006D50 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?SetValue@StringBuffer@Common@@QEAAJPEBGK@Z @ 0x180027FDC (-SetValue@StringBuffer@Common@@QEAAJPEBGK@Z.c)
 */

__int64 __fastcall Common::StringBuffer::SetValueFromString(Common::StringBuffer *this, const unsigned __int16 *a2)
{
  __int64 result; // rax
  Common::StringBuffer *v4; // r11
  _WORD *v5; // rax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = 0LL;
    result = StringCchLengthW(a2, 1073741822LL, &v6);
    if ( (int)result >= 0 )
      return Common::StringBuffer::SetValue(v4, a2, v6);
  }
  else
  {
    v5 = (_WORD *)*((_QWORD *)this + 1);
    if ( v5 )
      *v5 = 0;
    *(_DWORD *)this = 0;
    return 0LL;
  }
  return result;
}
