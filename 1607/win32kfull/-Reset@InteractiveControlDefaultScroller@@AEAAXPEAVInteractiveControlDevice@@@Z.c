/*
 * XREFs of ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@@Z @ 0x1C023F62C
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

void __fastcall InteractiveControlDefaultScroller::Reset(
        InteractiveControlDefaultScroller *this,
        struct InteractiveControlDevice *a2)
{
  int v3; // edx
  _BYTE *v4; // rsi
  char v5; // al
  char v6; // cl
  char v7; // al
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rax

  LODWORD(InteractiveControlDefaultScroller::s_ballistics) = *((_DWORD *)InteractiveControlManager::Instance() + 55);
  v3 = *((_DWORD *)InteractiveControlManager::Instance() + 57);
  dword_1C0334730 = 0;
  dword_1C0334738 = 0;
  dword_1C0334728 = v3;
  dword_1C0334724 = *((_DWORD *)InteractiveControlManager::Instance() + 59);
  dword_1C033472C = *((_DWORD *)InteractiveControlManager::Instance() + 61);
  dword_1C0334734 = *((_DWORD *)InteractiveControlManager::Instance() + 63);
  dword_1C033473C = *((_DWORD *)InteractiveControlManager::Instance() + 65);
  v4 = *(_BYTE **)(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 376LL);
  v5 = v4[977];
  *((_BYTE *)this + 60) = v5;
  v6 = v4[976];
  *((_BYTE *)this + 61) = v6;
  if ( !v5 && !v6 )
    *((_WORD *)this + 30) = 258;
  v7 = *((_BYTE *)this + 60);
  if ( !v7 )
    v7 = 2;
  *((_BYTE *)this + 60) = v7;
  if ( v7 == 2 )
    v8 = *((_DWORD *)InteractiveControlManager::Instance() + 51);
  else
    v8 = *((_DWORD *)InteractiveControlManager::Instance() + 53);
  if ( *((_DWORD *)this + 16) == 1 )
    v9 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
  else
    v9 = v8;
  v10 = (unsigned __int8)v4[978];
  if ( v10 <= v9 )
  {
    if ( *((_DWORD *)this + 16) == 1 )
      v10 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
    else
      v10 = v8;
  }
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 14) = v10;
  v11 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 5) = v11;
  *((_QWORD *)this + 2) = v11;
  InteractiveControlDefaultScroller::SetBallisticsLevel(this, 0, 1);
}
