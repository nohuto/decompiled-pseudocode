/*
 * XREFs of ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x18003BF8C
 * Callers:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003BD50 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetValueForKey@?$FixedSizeMap@KK$07@@QEAAJAEBK0@Z @ 0x18003C320 (-SetValueForKey@-$FixedSizeMap@KK$07@@QEAAJAEBK0@Z.c)
 */

__int64 __fastcall KeyboardModifierState::Initialize(KeyboardModifierState *this)
{
  char *v1; // rsi
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // r9d
  int v7; // [rsp+40h] [rbp+10h] BYREF
  int v8; // [rsp+48h] [rbp+18h] BYREF

  v7 = 0;
  v1 = (char *)this + 16;
  v8 = 1;
  v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey((char *)this + 16, &v8, &v7);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v7 = 0;
    v8 = 2;
    v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(v1, &v8, &v7);
    v4 = v2;
    if ( v2 >= 0 )
    {
      v7 = 0;
      v8 = 4;
      v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(v1, &v8, &v7);
      v4 = v2;
      if ( v2 >= 0 )
      {
        v7 = 0;
        v8 = 8;
        v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(v1, &v8, &v7);
        v4 = v2;
        if ( v2 >= 0 )
        {
          v7 = 0;
          v8 = 16;
          v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(v1, &v8, &v7);
          v4 = v2;
          if ( v2 >= 0 )
          {
            v7 = 0;
            v8 = 32;
            v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(v1, &v8, &v7);
            v4 = v2;
            if ( v2 >= 0 )
            {
              v7 = 0;
              v8 = 64;
              v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(v1, &v8, &v7);
              v4 = v2;
              if ( v2 >= 0 )
              {
                v7 = 0;
                v8 = 128;
                v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey(v1, &v8, &v7);
                v4 = v2;
                if ( v2 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                {
                  v5 = 96;
                  goto LABEL_25;
                }
              }
              else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v5 = 95;
                goto LABEL_25;
              }
            }
            else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v5 = 94;
              goto LABEL_25;
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v5 = 93;
            goto LABEL_25;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v5 = 92;
          goto LABEL_25;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 91;
        goto LABEL_25;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 90;
      goto LABEL_25;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 89;
LABEL_25:
    Template_qqq(v3, &MinInput_Warning_CheckResult, 0, v5, v2);
  }
  return v4;
}
