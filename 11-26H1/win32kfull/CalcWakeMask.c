/*
 * XREFs of CalcWakeMask @ 0x140055540
 * Callers:
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x140054290 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x140054C28 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x140055200 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     AdjustPwndPtiPqForDelegation @ 0x14005527C (AdjustPwndPtiPqForDelegation.c)
 *     TransferWakeBit @ 0x1400554A0 (TransferWakeBit.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     PostPointerEventMessage @ 0x1401F1830 (PostPointerEventMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v5; // r9d
  __int64 result; // rax
  unsigned int v7; // r9d
  bool v8; // cf
  int v9; // r8d
  int v10; // edx
  BOOL v11; // r8d
  unsigned int v12; // eax

  if ( a3 )
  {
    v9 = a3 | 0x3C07;
    if ( (a3 & 0x1C07) == 0 )
      v9 = a3;
    v5 = v9 | 0x98;
    if ( (v9 & 0x98) == 0 )
      v5 = v9;
  }
  else
  {
    v5 = 15871;
  }
  if ( !a1 && a2 == -1 )
    return v5;
  v7 = v5 & 0xFFFFFEFF;
  if ( !a1 )
  {
    if ( a2 == -1 )
      goto LABEL_20;
LABEL_9:
    if ( a2 >= 0xA0 )
      goto LABEL_14;
    if ( !a1 )
      goto LABEL_13;
    if ( a1 <= a2 )
      goto LABEL_12;
    goto LABEL_111;
  }
  if ( a1 <= a2 )
  {
    if ( a1 > 0xA0 )
    {
LABEL_12:
      if ( a2 >= 0x200 && a1 <= 0x200 )
      {
LABEL_14:
        if ( a1 <= a2 )
        {
          if ( a1 <= 0xA9 )
          {
            v8 = a2 < 0xA1;
LABEL_18:
            if ( !v8 )
              goto LABEL_20;
            goto LABEL_19;
          }
          if ( a1 <= 0x20E )
          {
            v8 = a2 < 0x201;
            goto LABEL_18;
          }
LABEL_19:
          v7 &= ~4u;
          goto LABEL_20;
        }
        goto LABEL_107;
      }
LABEL_13:
      v7 &= ~2u;
      goto LABEL_14;
    }
    goto LABEL_9;
  }
  if ( a2 > 0xA0 )
    goto LABEL_107;
  if ( a1 < 0xA0 )
    goto LABEL_19;
LABEL_111:
  if ( a1 >= 0x200 )
    goto LABEL_13;
LABEL_107:
  if ( a2 >= 0xA9 )
  {
    if ( a2 >= 0x20E || a1 <= 0x201 )
      goto LABEL_19;
  }
  else if ( a1 <= 0xA1 )
  {
    goto LABEL_19;
  }
LABEL_20:
  if ( a1 > a2 )
  {
    v10 = 1;
    v11 = a2 < 0x109 && a1 > 0x100;
    v12 = v7 & 0xFFFFFFFE;
    if ( v11 )
      v12 = v7;
    if ( a2 >= 0xFF || a1 <= 0xFF )
      v10 = 0;
    v7 = v12 & 0xFFFFFBFF;
    if ( v10 )
      v7 = v12;
    if ( a2 < 0x240 && a1 > 0x240 )
    {
LABEL_101:
      if ( a1 > 0x245 )
        goto LABEL_39;
      goto LABEL_85;
    }
  }
  else
  {
    if ( a1 > 0x109 || a2 < 0x100 )
      v7 &= ~1u;
    if ( a1 <= 0xFF && a2 >= 0xFF || (v7 &= ~0x400u, a1 <= 0x240) )
    {
      if ( a2 >= 0x240 )
      {
LABEL_32:
        if ( a2 >= 0x245 )
          goto LABEL_39;
        if ( a1 <= a2 )
          goto LABEL_34;
LABEL_85:
        if ( a2 < 0x244 && a1 > 0x241 )
          goto LABEL_39;
        goto LABEL_87;
      }
    }
  }
  if ( a1 )
  {
    if ( a1 > a2 )
    {
      if ( a2 > 0x11B || a1 < 0x11B )
      {
LABEL_84:
        if ( a2 >= 0x257 )
          goto LABEL_85;
        goto LABEL_101;
      }
      goto LABEL_29;
    }
    if ( a1 > 0x11B )
    {
LABEL_29:
      v7 &= ~0x800u;
      goto LABEL_30;
    }
  }
  else if ( a2 == -1 )
  {
    goto LABEL_51;
  }
  if ( a2 < 0x11B )
    goto LABEL_29;
LABEL_30:
  if ( a1 > a2 )
    goto LABEL_84;
  if ( a1 <= 0x257 )
    goto LABEL_32;
LABEL_34:
  if ( a1 > 0x244 )
    goto LABEL_67;
  if ( a2 >= 0x241 )
    goto LABEL_39;
  if ( a1 <= a2 )
  {
LABEL_67:
    if ( a2 >= 0x238 && a1 <= 0x238 )
      goto LABEL_39;
LABEL_38:
    v7 &= ~0x1000u;
    goto LABEL_39;
  }
LABEL_87:
  if ( a2 >= 0x238 || a1 <= 0x238 )
    goto LABEL_38;
LABEL_39:
  if ( !a1 )
  {
    if ( a2 == -1 )
      goto LABEL_51;
    goto LABEL_65;
  }
  if ( a1 > a2 )
  {
    if ( a2 > 0xF )
      goto LABEL_118;
    if ( a1 < 0xF )
      goto LABEL_51;
    goto LABEL_42;
  }
  if ( a1 <= 0xF )
  {
LABEL_65:
    if ( a2 >= 0xF )
      goto LABEL_43;
  }
LABEL_42:
  v7 &= ~0x20u;
LABEL_43:
  if ( !a1 )
  {
    if ( a2 == -1 )
      goto LABEL_51;
    goto LABEL_46;
  }
  if ( a1 <= a2 )
  {
    if ( a1 > 0x113 )
    {
LABEL_49:
      if ( a1 <= 0x118 && a2 >= 0x118 )
        goto LABEL_51;
      goto LABEL_50;
    }
LABEL_46:
    if ( a2 >= 0x113 )
      goto LABEL_51;
    if ( !a1 )
      goto LABEL_50;
    if ( a1 <= a2 )
      goto LABEL_49;
    goto LABEL_120;
  }
LABEL_118:
  if ( a2 > 0x113 || a1 < 0x113 )
    goto LABEL_51;
LABEL_120:
  if ( a1 >= 0x118 )
LABEL_50:
    v7 &= ~0x10u;
LABEL_51:
  result = v7 | 0x3C07;
  if ( a1 != 35 )
    return v7;
  return result;
}
