/*
 * XREFs of vDeactivateEudcRFONTsWorker @ 0x1C028B454
 * Callers:
 *     prfntDeactivateEudcRFONTs @ 0x1C012A5B0 (prfntDeactivateEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F444 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F4D4 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0030C94 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0030FB4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0126358 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0126370 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0126524 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vDeactivateEudcRFONTsWorker(struct RFONT *a1, _QWORD *a2, struct PFF *a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // cc
  int v10; // eax
  __int64 v11; // r11
  struct PFF *result; // rax
  struct PFF *v13; // rdi
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  struct RFONT *v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF

  v16 = a1;
  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v13 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) != 0 )
    {
      v7 = *((_QWORD *)result + 9);
      if ( v7 )
      {
        v15 = 0LL;
        do
        {
          v8 = *(_QWORD *)(v7 + 112);
          if ( v8 == *a2 || v8 == a2[1] )
          {
            v9 = *(_DWORD *)(v7 + 492) <= 0;
            v17 = *(_QWORD *)(v7 + 96);
            v14 = v7;
            if ( v9 )
            {
              v16 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v17);
              RFONTOBJ::vRemove((__int64)&v14, &v16, 1);
              PDEVOBJ::prfntInactive((PDEVOBJ *)&v17, v16);
              v10 = PDEVOBJ::cInactive((PDEVOBJ *)&v17) - 1;
              if ( (*(_DWORD *)(v11 + 56) & 0x800000) != 0 )
                *(_DWORD *)(*(_QWORD *)(v11 + 3544) + 1568LL) = v10;
              else
                *(_DWORD *)(v11 + 1568) = v10;
            }
            else
            {
              v16 = PDEVOBJ::prfntActive((PDEVOBJ *)&v17);
              RFONTOBJ::vRemove((__int64)&v14, &v16, 1);
              PDEVOBJ::prfntActive((PDEVOBJ *)&v17, v16);
            }
            RFONTOBJ::vInsert(&v14, a4, 1);
            v14 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
          }
          v7 = *(_QWORD *)(v7 + 520);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
        }
        while ( v7 );
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v13 + 1);
  }
  return result;
}
