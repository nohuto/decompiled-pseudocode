/*
 * XREFs of PopPepAttemptAcitivityPromotion @ 0x1400C0690
 * Callers:
 *     PopPepPromoteActivities @ 0x1400C044C (PopPepPromoteActivities.c)
 * Callees:
 *     PopPepShouldActivityWait @ 0x1400C07BC (PopPepShouldActivityWait.c)
 */

volatile signed __int32 *__fastcall PopPepAttemptAcitivityPromotion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile signed __int32 *a5)
{
  unsigned int v6; // edi
  int v10; // esi
  char v11; // r15
  volatile signed __int32 *result; // rax
  unsigned int v13; // esi

  v6 = 0;
  v10 = *((_DWORD *)&unk_140257678 + 34 * a4);
  if ( !v10 )
  {
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFFFFC | 2;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a3 + 4);
LABEL_9:
    result = a5;
    _InterlockedIncrement(a5);
    return result;
  }
  v11 = *(_BYTE *)(a3 + 16);
  result = (volatile signed __int32 *)PopPepShouldActivityWait((int)a1 + 72, a4, 0, 0, v11);
  if ( (_BYTE)result == 1 )
    return result;
  if ( v10 == 2 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    v13 = v6;
    goto LABEL_5;
  }
  if ( v10 == 3 )
  {
    v13 = 0;
    v6 = *(_DWORD *)(a1 + 168) - 1;
    goto LABEL_5;
  }
  v13 = *(_DWORD *)(a1 + 168);
  if ( v13 )
  {
LABEL_7:
    result = (volatile signed __int32 *)PopPepShouldActivityWait((int)a1 + 72, a4, 4, 5, v11);
    if ( (_BYTE)result == 1 )
      return result;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFFFFC | 2;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a3 + 4);
    goto LABEL_9;
  }
LABEL_5:
  while ( 1 )
  {
    result = (volatile signed __int32 *)PopPepShouldActivityWait((unsigned int)a1 + 200 * v13 + 232, a4, 1, 3, v11);
    if ( (_BYTE)result == 1 )
      return result;
    if ( ++v13 > v6 )
      goto LABEL_7;
  }
}
