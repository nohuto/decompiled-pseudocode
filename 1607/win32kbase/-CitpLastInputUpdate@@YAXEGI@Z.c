/*
 * XREFs of ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C0011C30
 * Callers:
 *     CitSetInfo @ 0x1C0004FF0 (CitSetInfo.c)
 *     CitLastInputUpdate @ 0x1C0011C00 (CitLastInputUpdate.c)
 *     CitModerncoreLastInputUpdate @ 0x1C00F8220 (CitModerncoreLastInputUpdate.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0011A84 (-CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0011AA0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0011E84 (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z @ 0x1C00F5F8C (-CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int8 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  int v5; // esi
  struct _CIT_IMPACT_CONTEXT *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct _CIT_USE_DATA *UseData; // rax
  unsigned __int16 *v10; // r9
  struct _CIT_USE_DATA *v11; // r10
  unsigned __int16 *v12; // rcx
  const struct _CIT_TIME_CONTEXT *v13; // r11
  struct _CIT_BITMAP *v14; // rcx

  LODWORD(v3) = a3;
  if ( a1 == 32 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    if ( a3 - MEMORY[0xFFFFF780000002E4] > 0x3E8 )
      MEMORY[0xFFFFF780000002E4] = a3;
  }
  if ( !qword_1C011E5D0 )
    return;
  if ( a3 < dword_1C011E5D8 )
    v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CitpTimeUpdate(v3);
  v6 = qword_1C011E5D0;
  if ( !v5 )
    CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C011E5D0 + 544), v3);
  CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 568), v3);
  v7 = *((_QWORD *)v6 + 55);
  if ( !v7 )
    return;
  v8 = *(_QWORD *)(v7 + 872);
  if ( !v8 )
    return;
  UseData = CitpProcessGetUseData((struct tagPROCESSINFO *)v7);
  v10 = 0LL;
  v11 = UseData;
  if ( UseData )
  {
    v13 = (const struct _CIT_TIME_CONTEXT *)&dword_1C011E5D8;
    if ( a1 != 1 && a1 != 2 )
    {
      switch ( a1 )
      {
        case 4u:
          v14 = (struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 48);
          break;
        case 8u:
          v14 = (struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 64);
          break;
        case 0x10u:
          goto LABEL_40;
        default:
          return;
      }
      CitpBitmapUpdateBit(v14, (const struct _CIT_TIME_CONTEXT *)&dword_1C011E5D8);
    }
LABEL_40:
    CitpBitmapUpdateBit((struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 32), v13);
  }
  if ( (unsigned int)(v3 - *(_DWORD *)(v8 + 68)) > 0x3E8 )
  {
    *(_DWORD *)(v8 + 68) = v3;
    *(_BYTE *)(v8 + 74) = 0;
    if ( v11 )
      CitpStatIncrement((unsigned __int16 *)v11 + 34, 1);
    CitpStatIncrement((unsigned __int16 *)v6 + 230, 1);
  }
  if ( (a1 & *(_BYTE *)(v8 + 74)) == 0 )
  {
    if ( v10 )
      CitpStatIncrement(v10, 1);
    switch ( a1 )
    {
      case 1u:
        v12 = (unsigned __int16 *)((char *)v6 + 462);
        break;
      case 2u:
        v12 = (unsigned __int16 *)((char *)v6 + 464);
        break;
      case 4u:
        v12 = (unsigned __int16 *)((char *)v6 + 468);
        break;
      case 8u:
        v12 = (unsigned __int16 *)((char *)v6 + 470);
        break;
      case 0x10u:
        v12 = (unsigned __int16 *)((char *)v6 + 466);
        break;
      case 0x80u:
        v12 = (unsigned __int16 *)((char *)v6 + 474);
        break;
      default:
        return;
    }
    CitpStatIncrement(v12, 1);
    *(_BYTE *)(v8 + 74) |= a1;
  }
}
