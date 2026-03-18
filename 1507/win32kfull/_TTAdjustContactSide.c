/*
 * XREFs of _TTAdjustContactSide @ 0x1C024C874
 * Callers:
 *     TouchTargetingCreateContact @ 0x1C024B8F0 (TouchTargetingCreateContact.c)
 * Callees:
 *     _TTHmToPixels @ 0x1C024C984 (_TTHmToPixels.c)
 *     _TTPixelsToHm @ 0x1C024CCE8 (_TTPixelsToHm.c)
 */

__int64 __fastcall TTAdjustContactSide(__int64 a1, int *a2, int *a3, unsigned int a4)
{
  int v4; // ebp
  int v6; // r14d
  int v7; // edi
  __int64 result; // rax
  int v11; // r10d
  int v12; // r11d
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r11d

  v4 = *a2;
  v6 = *a3;
  v7 = *a3 - *a2;
  result = TTPixelsToHm((unsigned int)v7, a4);
  if ( !(_DWORD)result )
  {
    v13 = 700LL;
LABEL_5:
    result = TTHmToPixels(v13, a4);
    v11 = result;
    goto LABEL_6;
  }
  v13 = 400LL;
  if ( (int)result < 400 )
    goto LABEL_5;
  v13 = 1100LL;
  if ( (int)result > 1100 )
    goto LABEL_5;
LABEL_6:
  if ( v12 == v6 || v12 == v4 )
  {
    result = (unsigned int)(v11 / 2);
    v15 = v12 - result;
    goto LABEL_11;
  }
  if ( v7 != v11 )
  {
    v14 = (v12 - v4) * (100 * v11 / v7);
    result = (unsigned int)((unsigned __int64)(1374389535LL * v14) >> 32) >> 31;
    v15 = v12 - v14 / 100;
LABEL_11:
    *a2 = v15;
  }
  *a3 = v11 + *a2;
  return result;
}
