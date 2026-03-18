/*
 * XREFs of HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C00272B8
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptor @ 0x1C001B970 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 */

__int64 __fastcall HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor(__int64 a1)
{
  unsigned int *v1; // rdi
  _DWORD *v2; // rsi
  unsigned int v4; // r14d
  int v5; // ebp
  __int64 v6; // rcx
  unsigned __int16 v7; // r9
  unsigned int *v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  int v12; // ecx
  __int64 v13; // rcx

  v1 = *(unsigned int **)(a1 + 2096);
  v2 = (_DWORD *)(a1 + 1716);
  v4 = 4065;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 240) != *(_DWORD *)(a1 + 1716) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = 66;
    goto LABEL_25;
  }
  if ( RtlCompareMemory((const void *)(a1 + 1716), *(const void **)(a1 + 2096), 0xAuLL) != 10 )
  {
    v7 = 67;
LABEL_24:
    v6 = *(_QWORD *)(a1 + 8);
LABEL_25:
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 1432), 2u, 5u, v7, (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids);
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      Template_p(
        v13,
        &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_PROPERTY_DESCRIPTOR,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24));
    return v4;
  }
  if ( *v2 > 0x1000u )
  {
    v7 = 68;
    goto LABEL_24;
  }
  v8 = (unsigned int *)((char *)v1 + 10);
  v9 = (unsigned __int64)v1 + *v1;
  while ( (unsigned __int64)v8 < v9 )
  {
    if ( (unsigned __int64)v8 + 14 > v9 )
    {
      v7 = 69;
      goto LABEL_24;
    }
    v10 = *v8;
    if ( (int)v9 - (int)v8 < (unsigned int)v10 )
    {
      v7 = 70;
      goto LABEL_24;
    }
    if ( (unsigned int)v10 < 0xE )
    {
      v7 = 71;
      goto LABEL_24;
    }
    v11 = v8[1];
    if ( !v11 || v11 > 7 )
    {
      v7 = 72;
      goto LABEL_24;
    }
    v12 = *((unsigned __int16 *)v8 + 4);
    if ( v12 + 14 > (unsigned int)v10 || !*((_WORD *)v8 + 4) || (v12 & 1) != 0 )
    {
      v7 = 73;
      goto LABEL_24;
    }
    if ( !*((_WORD *)v8 + 5) || *((_WORD *)v8 + ((unsigned __int64)*((unsigned __int16 *)v8 + 4) >> 1) + 4) )
    {
      v7 = 74;
      goto LABEL_24;
    }
    if ( *(unsigned int *)((char *)v8 + *((unsigned __int16 *)v8 + 4) + 10) + *((unsigned __int16 *)v8 + 4) + 14 > (unsigned int)v10 )
    {
      v7 = 75;
      goto LABEL_24;
    }
    if ( ++v5 == *((unsigned __int16 *)v1 + 4) )
      break;
    v8 = (unsigned int *)((char *)v8 + v10);
  }
  if ( v5 != *((unsigned __int16 *)v1 + 4) )
  {
    v7 = 76;
    goto LABEL_24;
  }
  return 4077;
}
