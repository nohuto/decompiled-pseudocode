/*
 * XREFs of CalcWakeMask @ 0x1C0082590
 * Callers:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C010BA70 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C010ECC8 (TransferWakeBit.c)
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
            goto LABEL_67;
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
            goto LABEL_20;
          goto LABEL_16;
        }
        if ( a1 > 0xA9 )
        {
LABEL_16:
          if ( a1 > a2 )
          {
            if ( a2 >= 0x20E || a1 <= 0x201 )
              goto LABEL_19;
          }
          else if ( a1 > 0x20E || a2 < 0x201 )
          {
LABEL_19:
            a3 &= ~4u;
          }
LABEL_20:
          if ( a1 > a2 )
          {
            if ( a2 < 0x109 && a1 > 0x100 )
            {
LABEL_23:
              if ( a1 > a2 )
              {
                if ( a2 < 0xFF && a1 > 0xFF )
                {
LABEL_26:
                  if ( a1 > a2 )
                  {
                    if ( a2 < 0x240 && a1 > 0x240 )
                      goto LABEL_33;
                  }
                  else if ( a1 <= 0x240 && a2 >= 0x240 )
                  {
                    goto LABEL_33;
                  }
                  if ( a1 )
                  {
                    if ( a1 > a2 )
                    {
                      if ( a2 <= 0x11B && a1 >= 0x11B )
                        goto LABEL_32;
                      goto LABEL_33;
                    }
                    if ( a1 > 0x11B )
                    {
LABEL_32:
                      a3 &= ~0x800u;
                      goto LABEL_33;
                    }
                  }
                  else if ( a2 == -1 )
                  {
                    goto LABEL_35;
                  }
                  if ( a2 < 0x11B )
                    goto LABEL_32;
LABEL_33:
                  if ( a1 > a2 )
                  {
                    if ( a2 < 0x257 && a1 > 0x245 )
                      goto LABEL_42;
                    goto LABEL_36;
                  }
                  if ( a1 > 0x257 )
                  {
LABEL_36:
                    if ( a1 > a2 )
                    {
                      if ( a2 < 0x244 && a1 > 0x241 )
                        goto LABEL_42;
                    }
                    else if ( a1 <= 0x244 && a2 >= 0x241 )
                    {
                      goto LABEL_42;
                    }
                    if ( a1 <= a2 )
                    {
                      if ( a1 <= 0x238 && a2 >= 0x238 )
                        goto LABEL_42;
LABEL_41:
                      a3 &= ~0x1000u;
                      goto LABEL_42;
                    }
                    if ( a2 >= 0x238 || a1 <= 0x238 )
                      goto LABEL_41;
LABEL_42:
                    if ( a1 )
                    {
                      if ( a1 > a2 )
                      {
                        if ( a2 <= 0xF && a1 >= 0xF )
                          goto LABEL_45;
                        goto LABEL_46;
                      }
                      if ( a1 > 0xF )
                      {
LABEL_45:
                        a3 &= ~0x20u;
                        goto LABEL_46;
                      }
                    }
                    else if ( a2 == -1 )
                    {
                      return a3;
                    }
                    if ( a2 < 0xF )
                      goto LABEL_45;
LABEL_46:
                    if ( a1 )
                    {
                      if ( a1 > a2 )
                      {
                        if ( a2 > 0x113 || a1 < 0x113 )
                          goto LABEL_53;
LABEL_49:
                        if ( a1 )
                        {
                          if ( a1 > a2 )
                          {
                            if ( a2 <= 0x118 && a1 >= 0x118 )
                              goto LABEL_52;
                            goto LABEL_53;
                          }
                          if ( a1 > 0x118 )
                          {
LABEL_52:
                            a3 &= ~0x10u;
                            goto LABEL_53;
                          }
                        }
                        else if ( a2 == -1 )
                        {
                          return a3;
                        }
                        if ( a2 < 0x118 )
                          goto LABEL_52;
LABEL_53:
                        if ( a1 == 35 )
                          a3 |= 0x3C07u;
                        return a3;
                      }
                      if ( a1 > 0x113 )
                        goto LABEL_49;
                    }
                    else if ( a2 == -1 )
                    {
                      return a3;
                    }
                    if ( a2 >= 0x113 )
                      goto LABEL_53;
                    goto LABEL_49;
                  }
LABEL_35:
                  if ( a2 >= 0x245 )
                    goto LABEL_42;
                  goto LABEL_36;
                }
              }
              else if ( a1 <= 0xFF && a2 >= 0xFF )
              {
                goto LABEL_26;
              }
              a3 &= ~0x400u;
              goto LABEL_26;
            }
          }
          else if ( a1 <= 0x109 && a2 >= 0x100 )
          {
            goto LABEL_23;
          }
          a3 &= ~1u;
          goto LABEL_23;
        }
LABEL_67:
        if ( a2 >= 0xA1 )
          goto LABEL_20;
        goto LABEL_16;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_67;
    }
    if ( a2 >= 0xA0 )
      goto LABEL_14;
    goto LABEL_9;
  }
  return a3;
}
