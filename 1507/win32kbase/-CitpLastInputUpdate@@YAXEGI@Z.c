/*
 * XREFs of ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C00525D8
 * Callers:
 *     CitLastInputUpdate @ 0x1C0052950 (CitLastInputUpdate.c)
 *     CitModerncoreLastInputUpdate @ 0x1C00E4A50 (CitModerncoreLastInputUpdate.c)
 * Callees:
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0052880 (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0052980 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0052AD8 (-CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0052B50 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int8 a1, __int16 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  struct _CIT_IMPACT_CONTEXT *v6; // rdi
  __int64 v7; // rbp
  struct _CIT_USE_DATA *UseData; // rax
  __int64 v9; // r11
  unsigned __int16 *v10; // r10
  unsigned __int16 *v11; // r9
  unsigned __int16 *v12; // rbp
  unsigned __int16 v13; // dx
  __int16 v14; // r9
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // dx
  __int64 v17; // rcx

  LODWORD(v3) = a3;
  if ( qword_1C0101FE0 )
  {
    if ( a3 < dword_1C0101FE8 )
      v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CitpTimeUpdate(v3);
    v6 = qword_1C0101FE0;
    if ( a1 != 32 )
      CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C0101FE0 + 496), v3);
    CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 520), v3);
    v7 = *((_QWORD *)v6 + 55);
    if ( v7 )
    {
      UseData = CitpProcessGetUseData(*((struct tagPROCESSINFO **)v6 + 55));
      v9 = *(_QWORD *)(v7 + 896);
      v10 = (unsigned __int16 *)UseData;
      if ( UseData )
      {
        if ( v9 )
        {
          if ( a1 == 1 )
          {
            v11 = (unsigned __int16 *)((char *)UseData + 70);
            v12 = (unsigned __int16 *)((char *)v6 + 570);
          }
          else if ( a1 == 2 )
          {
            v11 = (unsigned __int16 *)((char *)UseData + 78);
            v12 = (unsigned __int16 *)((char *)v6 + 572);
          }
          else
          {
            switch ( a1 )
            {
              case 4u:
                v17 = *((_QWORD *)v6 + 6);
                v11 = (unsigned __int16 *)((char *)UseData + 74);
                v12 = (unsigned __int16 *)((char *)v6 + 576);
                break;
              case 8u:
                v17 = *((_QWORD *)v6 + 8);
                v11 = (unsigned __int16 *)((char *)UseData + 72);
                v12 = (unsigned __int16 *)((char *)v6 + 578);
                break;
              case 0x10u:
                v11 = (unsigned __int16 *)((char *)UseData + 76);
                v12 = (unsigned __int16 *)((char *)v6 + 574);
                goto LABEL_11;
              default:
                return;
            }
            *(_BYTE *)((unsigned int)dword_1C010202C + v17) |= byte_1C0102030;
          }
LABEL_11:
          *(_BYTE *)((unsigned int)dword_1C010202C + *((_QWORD *)v6 + 4)) |= byte_1C0102030;
          v13 = 1;
          if ( (unsigned int)(v3 - *(_DWORD *)(v9 + 68)) > 0x3E8 )
          {
            *(_DWORD *)(v9 + 68) = v3;
            *(_BYTE *)(v9 + 56) = 0;
            *(_WORD *)(v9 + 58) = 0;
            CitpStatIncrement((unsigned __int16 *)UseData + 34, 1u);
            CitpStatIncrement((unsigned __int16 *)v6 + 284, v16);
          }
          if ( (a1 & *(_BYTE *)(v9 + 56)) == 0 )
          {
            CitpStatIncrement(v11, v13);
            CitpStatIncrement(v12, v15);
            *(_BYTE *)(v9 + 56) |= a1;
          }
          if ( a1 == 2 )
          {
            v14 = a2 & ~*(_WORD *)(v9 + 58);
            if ( v14 )
            {
              if ( (v14 & 3) != 0 )
                CitpStatIncrement(v10 + 40, v13);
              if ( (v14 & 0xC) != 0 )
                CitpStatIncrement(v10 + 41, v13);
              if ( (v14 & 0x30) != 0 )
                CitpStatIncrement(v10 + 42, v13);
              if ( (v14 & 0xC00) != 0 )
                CitpStatIncrement(v10 + 43, v13);
              *(_WORD *)(v9 + 58) |= v14;
            }
          }
        }
      }
    }
  }
}
