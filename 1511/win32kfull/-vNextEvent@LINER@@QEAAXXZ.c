/*
 * XREFs of ?vNextEvent@LINER@@QEAAXXZ @ 0x1C0132254
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0131798 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vNextPoint@LINER@@AEAAXXZ @ 0x1C01320C0 (-vNextPoint@LINER@@AEAAXXZ.c)
 */

void __fastcall LINER::vNextEvent(LINER *this)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // xmm1_8
  int v8; // eax

  *(_QWORD *)((char *)this + 692) = *((_QWORD *)this + 28);
  *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
  LINER::vNextPoint(this);
  v2 = *((_DWORD *)this + 172);
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 89);
    if ( *(_DWORD *)(v3 + 40) )
      break;
    if ( *(_DWORD *)(v3 + 44) )
      break;
    v8 = *((_DWORD *)this + 172);
    if ( v8 )
    {
      if ( (unsigned int)(v8 - 3) > 1 )
        break;
    }
    LINER::vNextPoint(this);
  }
  v4 = *((_QWORD *)this + 89);
  if ( !*(_DWORD *)(v4 + 48) && !*(_DWORD *)(v4 + 52) )
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(v4 + 40);
  if ( !v2 )
  {
    v5 = *((_DWORD *)this + 172);
    if ( (unsigned int)(v5 - 1) <= 1 )
    {
      if ( v5 == 1 )
        LINER::vNextPoint(this);
      *((_DWORD *)this + 71) = 0;
      *((_DWORD *)this + 60) = 0;
      *((_DWORD *)this + 73) = 0;
      *((_DWORD *)this + 70) = 16;
      *((_DWORD *)this + 72) = 16;
      *((_QWORD *)this + 88) = (char *)this + 240;
      *((_QWORD *)this + 89) = (char *)this + 240;
      *((_DWORD *)this + 172) = 7;
    }
    else
    {
      v6 = *((_QWORD *)this + 89);
      *((_OWORD *)this + 15) = *(_OWORD *)v6;
      *((_OWORD *)this + 16) = *(_OWORD *)(v6 + 16);
      *((_OWORD *)this + 17) = *(_OWORD *)(v6 + 32);
      *((_OWORD *)this + 18) = *(_OWORD *)(v6 + 48);
      *((_OWORD *)this + 19) = *(_OWORD *)(v6 + 64);
      v7 = *(_QWORD *)(v6 + 80);
      *((_DWORD *)this + 172) = 0;
      *((_QWORD *)this + 40) = v7;
      *((_QWORD *)this + 89) = (char *)this + 240;
    }
  }
}
