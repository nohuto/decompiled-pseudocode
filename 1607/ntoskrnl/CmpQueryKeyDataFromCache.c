/*
 * XREFs of CmpQueryKeyDataFromCache @ 0x1404A7428
 * Callers:
 *     CmpQueryKeyData @ 0x1404A7348 (CmpQueryKeyData.c)
 * Callees:
 *     CmGetVisibleSubkeyCount @ 0x1403FAE50 (CmGetVisibleSubkeyCount.c)
 *     CmGetVisibleValueCount @ 0x1404A75E8 (CmGetVisibleValueCount.c)
 *     CmGetKeyLastWriteTime @ 0x1404A761C (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1404A7690 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404A7724 (CmGetVisibleMaxNameLenAndClassLen.c)
 */

__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rcx
  unsigned __int16 v10; // r14
  int VisibleMaxNameLenAndClassLen; // ebx
  int v12; // ecx
  __int64 v13; // rax
  int v15; // [rsp+34h] [rbp-34h] BYREF
  int v16; // [rsp+38h] [rbp-30h] BYREF
  _DWORD v17[4]; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v17[0] = -1;
  v17[1] = 0;
  v9 = *(_QWORD *)(a1 + 72);
  if ( !v9 )
    return 3221225626LL;
  v10 = *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)v9 & 1) != 0 )
    v10 *= 2;
  if ( a2 == 4 )
  {
    VisibleMaxNameLenAndClassLen = CmGetVisibleMaxNameLenAndClassLen(a1, 0, a6, (unsigned int)&v18, 0LL);
    if ( VisibleMaxNameLenAndClassLen >= 0 )
    {
      VisibleMaxNameLenAndClassLen = CmGetVisibleMaxValueNameLenAndDataLen(a1, 0, a6, (unsigned int)&v15, (__int64)&v16);
      if ( VisibleMaxNameLenAndClassLen >= 0 )
      {
        *a5 = 40;
        if ( a4 < 0x28 )
        {
          return (unsigned int)-1073741789;
        }
        else
        {
          *(_QWORD *)a3 = CmGetKeyLastWriteTime(a1, 0LL, a6);
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 32) = v10;
          *(_DWORD *)(a3 + 20) = CmGetVisibleValueCount(a1, 0LL, a6);
          *(_DWORD *)(a3 + 16) = v18;
          *(_DWORD *)(a3 + 24) = v15;
          *(_DWORD *)(a3 + 28) = v16;
          v12 = *(_DWORD *)(a1 + 4);
          if ( (v12 & 0x40) != 0 || *(_QWORD *)(a1 + 200) != a1 + 200 )
          {
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
                    *(_QWORD *)(a1 + 24),
                    *(unsigned int *)(a1 + 32),
                    v17);
            if ( v13 )
            {
              *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, v13, a6);
              (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v17);
            }
            else
            {
              return (unsigned int)-1073741670;
            }
          }
          else if ( (v12 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 0;
          }
          else if ( (v12 & 2) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 1;
          }
          else if ( (v12 & 4) != 0 )
          {
            *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 104);
          }
          else
          {
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 104);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)VisibleMaxNameLenAndClassLen;
}
