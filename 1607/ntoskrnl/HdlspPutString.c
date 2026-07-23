/*
 * XREFs of HdlspPutString @ 0x140723C8C
 * Callers:
 *     HdlspDispatch @ 0x140722DE0 (HdlspDispatch.c)
 *     HdlspProcessDumpCommand @ 0x140723978 (HdlspProcessDumpCommand.c)
 *     HdlspPutMore @ 0x140723BF0 (HdlspPutMore.c)
 * Callees:
 *     HdlspUTF8Encode @ 0x14022C6C8 (HdlspUTF8Encode.c)
 *     HdlspSendStringAtBaud @ 0x140723F44 (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspPutString(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rbx
  PKSPIN_LOCK v2; // r9
  unsigned __int8 *v3; // r8
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // cl
  __int64 v6; // rcx
  unsigned __int8 *v7; // rdx
  char v9; // [rsp+30h] [rbp+8h] BYREF
  __int16 v10; // [rsp+31h] [rbp+9h]

  v1 = a1;
  v2 = HeadlessGlobals;
  v3 = (unsigned __int8 *)HeadlessGlobals[3];
  if ( *a1 )
  {
    while ( 1 )
    {
      v4 = (unsigned __int8 *)(v2[3] + 79);
      if ( v3 < v4 )
        break;
      *v4 = 0;
      HdlspSendStringAtBaud(v2[3]);
      v2 = HeadlessGlobals;
      v3 = (unsigned __int8 *)HeadlessGlobals[3];
LABEL_38:
      if ( !*v1 )
        goto LABEL_39;
    }
    v5 = *v1;
    if ( (*v1 & 0x80u) == 0 )
      goto LABEL_36;
    if ( v5 > 0xC0u )
    {
      if ( v5 == 196 )
      {
        v5 = 45;
        goto LABEL_30;
      }
      if ( v5 <= 0xC7u )
        goto LABEL_30;
      if ( v5 <= 0xC9u )
        goto LABEL_16;
      if ( v5 == 205 )
      {
        v5 = 61;
        goto LABEL_30;
      }
      if ( v5 <= 0xD8u )
        goto LABEL_30;
      if ( v5 <= 0xDAu )
      {
LABEL_16:
        v5 = 43;
        goto LABEL_30;
      }
      if ( v5 == 219 )
        goto LABEL_27;
      if ( (unsigned int)v5 - 220 > 3 )
        goto LABEL_30;
    }
    else
    {
      if ( v5 >= 0xBFu )
        goto LABEL_16;
      if ( v5 < 0xA9u )
        goto LABEL_30;
      if ( v5 <= 0xAAu )
        goto LABEL_16;
      if ( v5 == 176 )
        goto LABEL_17;
      if ( v5 != 177 )
      {
        if ( v5 != 178 )
        {
          if ( v5 != 179 && v5 != 186 )
          {
            if ( v5 > 0xBAu && v5 <= 0xBCu )
              goto LABEL_16;
LABEL_30:
            if ( (v5 & 0x80u) != 0 )
            {
              v9 = 0;
              v10 = 0;
              HdlspUTF8Encode(HdlpsPcAnsiToUnicode[v5 & 0x7F], &v9);
              v6 = 3LL;
              v7 = (unsigned __int8 *)&v9;
              do
              {
                if ( *v7 )
                  *v3++ = *v7;
                ++v7;
                --v6;
              }
              while ( v6 );
              goto LABEL_37;
            }
LABEL_36:
            *v3++ = v5;
LABEL_37:
            ++v1;
            goto LABEL_38;
          }
LABEL_17:
          v5 = 124;
          goto LABEL_30;
        }
LABEL_27:
        v5 = 35;
        goto LABEL_30;
      }
    }
    v5 = 37;
    goto LABEL_30;
  }
LABEL_39:
  *v3 = 0;
  return HdlspSendStringAtBaud(v2[3]);
}
