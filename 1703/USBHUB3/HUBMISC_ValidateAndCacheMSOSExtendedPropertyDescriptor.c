/*
 * XREFs of HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C00297F8
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptor @ 0x1C001D860 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
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
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // r11d
  __int64 v14; // rcx

  v1 = *(unsigned int **)(a1 + 2096);
  v2 = (_DWORD *)(a1 + 1716);
  v4 = 4065;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 240) != *(_DWORD *)(a1 + 1716) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = 68;
    goto LABEL_27;
  }
  if ( RtlCompareMemory((const void *)(a1 + 1716), *(const void **)(a1 + 2096), 0xAuLL) != 10 )
  {
    v7 = 69;
LABEL_26:
    v6 = *(_QWORD *)(a1 + 8);
LABEL_27:
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 1432), 2u, 5u, v7, (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      Template_p(
        v14,
        &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_PROPERTY_DESCRIPTOR,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24));
    return v4;
  }
  if ( *v2 > 0x1000u )
  {
    v7 = 70;
    goto LABEL_26;
  }
  v8 = (unsigned int *)((char *)v1 + 10);
  v9 = (unsigned __int64)v1 + *v1;
  while ( (unsigned __int64)v8 < v9 )
  {
    if ( (unsigned __int64)v8 + 14 > v9 )
    {
      v7 = 71;
      goto LABEL_26;
    }
    v10 = *v8;
    if ( (int)v9 - (int)v8 < (unsigned int)v10 )
    {
      v7 = 72;
      goto LABEL_26;
    }
    if ( (unsigned int)v10 < 0xE )
    {
      v7 = 73;
      goto LABEL_26;
    }
    v11 = v8[1];
    if ( !v11 || v11 > 7 )
    {
      v7 = 74;
      goto LABEL_26;
    }
    v12 = *((unsigned __int16 *)v8 + 4);
    if ( (int)v12 + 14 > (unsigned int)v10 || !*((_WORD *)v8 + 4) || (v12 & 1) != 0 )
    {
      v7 = 75;
      goto LABEL_26;
    }
    if ( !*((_WORD *)v8 + 5) || *((_WORD *)v8 + ((unsigned __int64)*((unsigned __int16 *)v8 + 4) >> 1) + 4) )
    {
      v7 = 76;
      goto LABEL_26;
    }
    v13 = *(unsigned int *)((char *)v8 + v12 + 10);
    if ( (unsigned int)v12 > ~v13 )
    {
      v7 = 77;
      goto LABEL_26;
    }
    if ( (unsigned int)(v13 + v12) > 0xFFFFFFF1 || v13 + (int)v12 + 14 > (unsigned int)v10 )
    {
      v7 = 78;
      goto LABEL_26;
    }
    if ( ++v5 == *((unsigned __int16 *)v1 + 4) )
      break;
    v8 = (unsigned int *)((char *)v8 + v10);
  }
  if ( v5 != *((unsigned __int16 *)v1 + 4) )
  {
    v7 = 79;
    goto LABEL_26;
  }
  return 4077;
}
