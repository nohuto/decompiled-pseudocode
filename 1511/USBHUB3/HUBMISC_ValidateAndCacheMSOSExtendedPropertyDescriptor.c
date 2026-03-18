/*
 * XREFs of HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C0027258
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptor @ 0x1C001B8C0 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006048 (Template_p.c)
 */

__int64 __fastcall HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor(__int64 a1)
{
  unsigned int *v1; // rdi
  _DWORD *v2; // rsi
  unsigned int v4; // r14d
  int v5; // ebp
  __int64 v6; // rcx
  unsigned __int16 v7; // r9
  unsigned int *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  char *v11; // r11
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx

  v1 = *(unsigned int **)(a1 + 2096);
  v2 = (_DWORD *)(a1 + 1716);
  v4 = 4065;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 240) == *(_DWORD *)(a1 + 1716) )
  {
    if ( RtlCompareMemory((const void *)(a1 + 1716), *(const void **)(a1 + 2096), 0xAuLL) == 10 )
    {
      if ( *v2 <= 0x1000u )
      {
        v8 = (unsigned int *)((char *)v1 + 10);
        v9 = (unsigned __int64)v1 + *v1;
        if ( (unsigned __int64)v1 + 10 >= v9 )
        {
LABEL_21:
          if ( v5 == *((unsigned __int16 *)v1 + 4) )
            return 4077;
          v7 = 76;
        }
        else
        {
          while ( (unsigned __int64)v8 + 14 <= v9 )
          {
            v10 = *v8;
            v11 = (char *)v8 + v10;
            if ( (unsigned __int64)v8 + v10 > v9 )
            {
              v7 = 70;
              goto LABEL_23;
            }
            if ( (unsigned int)v10 < 0xE )
            {
              v7 = 71;
              goto LABEL_23;
            }
            v12 = v8[1];
            if ( !v12 || v12 > 7 )
            {
              v7 = 72;
              goto LABEL_23;
            }
            v13 = *((unsigned __int16 *)v8 + 4);
            if ( (int)v13 + 14 > (unsigned int)v10 || !*((_WORD *)v8 + 4) || (v13 & 1) != 0 )
            {
              v7 = 73;
              goto LABEL_23;
            }
            if ( !*((_WORD *)v8 + 5) || *((_WORD *)v8 + ((unsigned __int64)*((unsigned __int16 *)v8 + 4) >> 1) + 4) )
            {
              v7 = 74;
              goto LABEL_23;
            }
            if ( *(unsigned int *)((char *)v8 + v13 + 10) + (_DWORD)v13 + 14 > (unsigned int)v10 )
            {
              v7 = 75;
              goto LABEL_23;
            }
            if ( ++v5 != *((unsigned __int16 *)v1 + 4) )
            {
              v8 = (unsigned int *)((char *)v8 + v10);
              if ( (unsigned __int64)v11 < v9 )
                continue;
            }
            goto LABEL_21;
          }
          v7 = 69;
        }
      }
      else
      {
        v7 = 68;
      }
    }
    else
    {
      v7 = 67;
    }
LABEL_23:
    v6 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = 66;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(v6 + 1432), 2u, 5u, v7, (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids);
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
    Template_p(
      v14,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_PROPERTY_DESCRIPTOR,
      (const GUID *)(a1 + 1500),
      *(_QWORD *)(a1 + 24));
  return v4;
}
