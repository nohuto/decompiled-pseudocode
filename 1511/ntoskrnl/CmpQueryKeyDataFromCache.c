/*
 * XREFs of CmpQueryKeyDataFromCache @ 0x1403D6770
 * Callers:
 *     CmpQueryKeyData @ 0x1403D66A8 (CmpQueryKeyData.c)
 * Callees:
 *     CmGetVisibleValueCount @ 0x1403D6924 (CmGetVisibleValueCount.c)
 *     CmGetKeyLastWriteTime @ 0x1403D6958 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1403D69C4 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1403D6A44 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetVisibleSubkeyCount @ 0x1403DB0B4 (CmGetVisibleSubkeyCount.c)
 */

__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rcx
  unsigned __int16 v10; // si
  __int64 v11; // r15
  int VisibleMaxNameLenAndClassLen; // edi
  int v13; // ecx
  __int64 v14; // rax
  int v16; // [rsp+34h] [rbp-34h] BYREF
  int v17; // [rsp+38h] [rbp-30h] BYREF
  _DWORD v18[11]; // [rsp+3Ch] [rbp-2Ch] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = -1;
  v9 = *(_QWORD *)(a1 + 80);
  if ( !v9 )
    return 3221225626LL;
  v10 = *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)v9 & 1) != 0 )
    v10 *= 2;
  if ( a2 == 4 )
  {
    v11 = a6;
    VisibleMaxNameLenAndClassLen = CmGetVisibleMaxNameLenAndClassLen(a1, 0, a6, (unsigned int)&v16, 0LL);
    if ( VisibleMaxNameLenAndClassLen >= 0 )
    {
      VisibleMaxNameLenAndClassLen = CmGetVisibleMaxValueNameLenAndDataLen(a1, 0, v11, (unsigned int)&v17, (__int64)v18);
      if ( VisibleMaxNameLenAndClassLen >= 0 )
      {
        *a5 = 40;
        if ( a4 < 0x28 )
        {
          return (unsigned int)-1073741789;
        }
        else
        {
          *(_QWORD *)a3 = CmGetKeyLastWriteTime(a1, 0LL, v11);
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 32) = v10;
          *(_DWORD *)(a3 + 20) = CmGetVisibleValueCount(a1, 0LL, v11);
          *(_DWORD *)(a3 + 16) = v16;
          *(_DWORD *)(a3 + 24) = v17;
          *(_DWORD *)(a3 + 28) = v18[0];
          v13 = *(_DWORD *)(a1 + 4);
          if ( (v13 & 0x40) != 0 || *(_QWORD *)(a1 + 200) != a1 + 200 )
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
                    *(_QWORD *)(a1 + 32),
                    *(unsigned int *)(a1 + 40),
                    &v19);
            if ( v14 )
            {
              *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, v14, v11);
              (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v19);
            }
            else
            {
              return (unsigned int)-1073741670;
            }
          }
          else if ( (v13 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 0;
          }
          else if ( (v13 & 2) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 1;
          }
          else if ( (v13 & 4) != 0 )
          {
            *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 112);
          }
          else
          {
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 112);
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
