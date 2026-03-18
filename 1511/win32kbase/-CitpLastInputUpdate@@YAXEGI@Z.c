/*
 * XREFs of ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C004779C
 * Callers:
 *     CitLastInputUpdate @ 0x1C0047AA0 (CitLastInputUpdate.c)
 *     CitModerncoreLastInputUpdate @ 0x1C00E6450 (CitModerncoreLastInputUpdate.c)
 * Callees:
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00479CC (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0047AD0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0047C28 (-CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C004A1C0 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z @ 0x1C00E4004 (-CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int8 a1, __int16 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  struct _CIT_IMPACT_CONTEXT *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int16 *UseData; // r10
  unsigned __int16 *v10; // r11
  unsigned __int16 *v11; // rcx
  const struct _CIT_TIME_CONTEXT *v12; // r9
  struct _CIT_BITMAP *v13; // rcx
  __int16 v14; // r9

  LODWORD(v3) = a3;
  if ( !qword_1C0107180 )
    return;
  if ( a3 < dword_1C0107188 )
    v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CitpTimeUpdate(v3);
  v6 = qword_1C0107180;
  if ( a1 != 32 )
    CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C0107180 + 536), v3);
  CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 560), v3);
  v7 = *((_QWORD *)v6 + 55);
  if ( !v7 )
    return;
  v8 = *(_QWORD *)(v7 + 880);
  if ( !v8 )
    return;
  UseData = (unsigned __int16 *)CitpProcessGetUseData((struct tagPROCESSINFO *)v7);
  v10 = 0LL;
  if ( UseData )
  {
    v12 = (const struct _CIT_TIME_CONTEXT *)&dword_1C0107188;
    if ( a1 != 1 && a1 != 2 )
    {
      switch ( a1 )
      {
        case 4u:
          v13 = (struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 48);
          break;
        case 8u:
          v13 = (struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 64);
          break;
        case 0x10u:
          goto LABEL_37;
        default:
          return;
      }
      CitpBitmapUpdateBit(v13, (const struct _CIT_TIME_CONTEXT *)&dword_1C0107188);
    }
LABEL_37:
    CitpBitmapUpdateBit((struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 32), v12);
    if ( a1 == 2 )
    {
      v14 = a2 & ~*(_WORD *)(v8 + 72);
      if ( v14 )
      {
        if ( (v14 & 3) != 0 )
          CitpStatIncrement(UseData + 40, 1u);
        if ( (v14 & 0xC) != 0 )
          CitpStatIncrement(UseData + 41, 1u);
        if ( (v14 & 0x30) != 0 )
          CitpStatIncrement(UseData + 42, 1u);
        if ( (v14 & 0xC00) != 0 )
          CitpStatIncrement(UseData + 43, 1u);
        *(_WORD *)(v8 + 72) |= v14;
      }
    }
  }
  if ( (unsigned int)(v3 - *(_DWORD *)(v8 + 68)) > 0x3E8 )
  {
    *(_DWORD *)(v8 + 68) = v3;
    *(_BYTE *)(v8 + 74) = 0;
    *(_WORD *)(v8 + 72) = 0;
    if ( UseData )
      CitpStatIncrement(UseData + 34, 1u);
    CitpStatIncrement((unsigned __int16 *)v6 + 230, 1u);
  }
  if ( (a1 & *(_BYTE *)(v8 + 74)) == 0 )
  {
    if ( v10 )
      CitpStatIncrement(v10, 1u);
    switch ( a1 )
    {
      case 1u:
        v11 = (unsigned __int16 *)((char *)v6 + 462);
        break;
      case 2u:
        v11 = (unsigned __int16 *)((char *)v6 + 464);
        break;
      case 4u:
        v11 = (unsigned __int16 *)((char *)v6 + 468);
        break;
      case 8u:
        v11 = (unsigned __int16 *)((char *)v6 + 470);
        break;
      case 0x10u:
        v11 = (unsigned __int16 *)((char *)v6 + 466);
        break;
      default:
        return;
    }
    CitpStatIncrement(v11, 1u);
    *(_BYTE *)(v8 + 74) |= a1;
  }
}
