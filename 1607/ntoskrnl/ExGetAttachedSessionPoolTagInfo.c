/*
 * XREFs of ExGetAttachedSessionPoolTagInfo @ 0x140499D58
 * Callers:
 *     ExGetSessionPoolTagInformation @ 0x140499B84 (ExGetSessionPoolTagInformation.c)
 * Callees:
 *     ExGetSessionPoolTagInfo @ 0x14008801C (ExGetSessionPoolTagInfo.c)
 */

__int64 __fastcall ExGetAttachedSessionPoolTagInfo(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // ecx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  *a3 = 0;
  if ( a2 < 0x38 )
  {
    v8 = 0;
    v4 = -1073741820;
    v9 = 0LL;
  }
  else
  {
    v8 = a2 - 16;
    v9 = a1 + 16;
  }
  result = ExGetSessionPoolTagInfo(v9, v8, &v13, &v12);
  if ( (int)result >= 0 )
  {
    if ( v4 >= 0 )
    {
      v11 = v13;
      *(_DWORD *)(a1 + 12) = v13;
      *(_DWORD *)(a1 + 8) = a4;
      *(_QWORD *)a1 = (unsigned int)(40 * (v11 - 1) + 56);
    }
    goto LABEL_6;
  }
  if ( (_DWORD)result == -1073741820 )
  {
    v4 = -1073741820;
LABEL_6:
    result = (unsigned int)v4;
    *a3 = 40 * (v12 - 1) + 56;
  }
  return result;
}
