/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C00E7070
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C016BD5C (-xwtol@@YAKPEBG@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  int v2; // eax
  const wchar_t *v3; // rcx
  wchar_t *v4; // rax
  __int64 v5; // rcx
  DXGADAPTER *v6; // rcx
  int Key; // [rsp+40h] [rbp+8h] BYREF

  if ( *((int *)this + 448) >= 0x2000 )
  {
    v2 = *((_DWORD *)this + 69);
    if ( v2 == 4098 || v2 == 4318 )
    {
      *((_DWORD *)this + 379) |= 0x40u;
    }
    else if ( v2 == 32902 && (*((_DWORD *)this + 379) & 0x40) != 0 )
    {
      Key = *((_DWORD *)this + 70);
      if ( bsearch(&Key, &unk_1C0038C70, 0x18uLL, 4uLL, UintCompareFunc) )
      {
        v3 = (const wchar_t *)*((_QWORD *)this + 143);
        if ( v3 )
        {
          v4 = wcsrchr(v3, 0x2Eu);
          if ( v4 )
          {
            v5 = -1LL;
            do
              ++v5;
            while ( v4[v5] );
            if ( v5 == 5 && xwtol(v4 + 1) - 1 <= 0x116D )
              *((_DWORD *)this + 379) &= ~0x40u;
          }
        }
      }
    }
  }
  if ( g_IsMobileCore && *((_DWORD *)this + 69) == 1297040209 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(this) <= 2000 )
      *((_DWORD *)this + 927) |= 0x10u;
    if ( (int)DXGADAPTER::GetDriverVersion(v6) <= 1300 )
      *((_DWORD *)this + 927) |= 0xBu;
    if ( *((_DWORD *)this + 448) == 4608 )
      *((_DWORD *)this + 927) |= 4u;
  }
}
