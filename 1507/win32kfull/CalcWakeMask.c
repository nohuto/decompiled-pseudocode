/*
 * XREFs of CalcWakeMask @ 0x1C006AE00
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00E61D0 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C00EAAA4 (TransferWakeBit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, unsigned int a3)
{
  if ( a3 )
  {
    if ( (a3 & 0x1C07) != 0 )
      a3 |= 0x3C07u;
    if ( (a3 & 0x98) != 0 )
      a3 |= 0x98u;
  }
  else
  {
    a3 = 15871;
  }
  if ( a1 || a2 != -1 )
  {
    a3 &= ~0x100u;
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 > 0xA0 || a1 < 0xA0 )
          goto LABEL_14;
        goto LABEL_9;
      }
      if ( a1 > 0xA0 )
      {
LABEL_9:
        if ( !a1 )
        {
          if ( a2 == -1 )
            goto LABEL_70;
LABEL_12:
          if ( a2 >= 0x200 )
            goto LABEL_14;
          goto LABEL_13;
        }
        if ( a1 <= a2 )
        {
          if ( a1 <= 0x200 )
            goto LABEL_12;
LABEL_13:
          a3 &= ~2u;
          goto LABEL_14;
        }
        if ( a2 <= 0x200 && a1 >= 0x200 )
          goto LABEL_13;
LABEL_14:
        if ( a1 > a2 )
        {
          if ( a2 < 0xA9 && a1 > 0xA1 )
            goto LABEL_19;
          goto LABEL_16;
        }
        if ( a1 > 0xA9 )
        {
LABEL_16:
          if ( a1 <= a2 )
          {
            if ( a2 >= 0x201 && a1 <= 0x20E )
              goto LABEL_19;
LABEL_18:
            a3 &= ~4u;
            goto LABEL_19;
          }
          if ( a2 >= 0x20E || a1 <= 0x201 )
            goto LABEL_18;
LABEL_19:
          if ( a1 > a2 )
          {
            if ( a2 < 0x109 && a1 > 0x100 )
            {
LABEL_22:
              if ( a1 > a2 )
              {
                if ( a2 < 0xFF && a1 > 0xFF )
                {
LABEL_25:
                  if ( a1 > a2 )
                  {
                    if ( a2 < 0x240 && a1 > 0x240 )
                    {
LABEL_31:
                      if ( a1 > a2 )
                      {
                        if ( a2 < 0x257 && a1 > 0x245 )
                          goto LABEL_39;
                        goto LABEL_34;
                      }
                      if ( a1 > 0x257 )
                      {
LABEL_34:
                        if ( a1 <= a2 )
                        {
                          if ( a2 >= 0x241 && a1 <= 0x244 )
                            goto LABEL_39;
LABEL_36:
                          if ( a1 > a2 )
                          {
                            if ( a2 < 0x238 && a1 > 0x238 )
                              goto LABEL_39;
                          }
                          else if ( a2 >= 0x238 && a1 <= 0x238 )
                          {
                            goto LABEL_39;
                          }
                          a3 &= ~0x1000u;
                          goto LABEL_39;
                        }
                        if ( a2 >= 0x244 || a1 <= 0x241 )
                          goto LABEL_36;
LABEL_39:
                        if ( a1 )
                        {
                          if ( a1 > a2 )
                          {
                            if ( a2 <= 0xF && a1 >= 0xF )
                              goto LABEL_42;
                            goto LABEL_43;
                          }
                          if ( a1 > 0xF )
                          {
LABEL_42:
                            a3 &= ~0x20u;
                            goto LABEL_43;
                          }
                        }
                        else if ( a2 == -1 )
                        {
                          return a3;
                        }
                        if ( a2 < 0xF )
                          goto LABEL_42;
LABEL_43:
                        if ( a1 )
                        {
                          if ( a1 > a2 )
                          {
                            if ( a2 > 0x113 || a1 < 0x113 )
                              goto LABEL_50;
LABEL_46:
                            if ( a1 )
                            {
                              if ( a1 > a2 )
                              {
                                if ( a2 <= 0x118 && a1 >= 0x118 )
                                  goto LABEL_49;
                                goto LABEL_50;
                              }
                              if ( a1 > 0x118 )
                              {
LABEL_49:
                                a3 &= ~0x10u;
                                goto LABEL_50;
                              }
                            }
                            else if ( a2 == -1 )
                            {
                              return a3;
                            }
                            if ( a2 < 0x118 )
                              goto LABEL_49;
LABEL_50:
                            if ( a1 == 35 )
                              a3 |= 0x3C07u;
                            return a3;
                          }
                          if ( a1 > 0x113 )
                            goto LABEL_46;
                        }
                        else if ( a2 == -1 )
                        {
                          return a3;
                        }
                        if ( a2 >= 0x113 )
                          goto LABEL_50;
                        goto LABEL_46;
                      }
LABEL_33:
                      if ( a2 >= 0x245 )
                        goto LABEL_39;
                      goto LABEL_34;
                    }
                  }
                  else if ( a2 >= 0x240 && a1 <= 0x240 )
                  {
                    goto LABEL_31;
                  }
                  if ( a1 )
                  {
                    if ( a1 > a2 )
                    {
                      if ( a2 > 0x11B || a1 < 0x11B )
                        goto LABEL_31;
LABEL_30:
                      a3 &= ~0x800u;
                      goto LABEL_31;
                    }
                    if ( a1 > 0x11B )
                      goto LABEL_30;
                  }
                  else if ( a2 == -1 )
                  {
                    goto LABEL_33;
                  }
                  if ( a2 >= 0x11B )
                    goto LABEL_31;
                  goto LABEL_30;
                }
              }
              else if ( a1 <= 0xFF && a2 >= 0xFF )
              {
                goto LABEL_25;
              }
              a3 &= ~0x400u;
              goto LABEL_25;
            }
          }
          else if ( a1 <= 0x109 && a2 >= 0x100 )
          {
            goto LABEL_22;
          }
          a3 &= ~1u;
          goto LABEL_22;
        }
LABEL_70:
        if ( a2 >= 0xA1 )
          goto LABEL_19;
        goto LABEL_16;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_70;
    }
    if ( a2 >= 0xA0 )
      goto LABEL_14;
    goto LABEL_9;
  }
  return a3;
}
