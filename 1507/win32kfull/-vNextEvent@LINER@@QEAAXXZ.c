/*
 * XREFs of ?vNextEvent@LINER@@QEAAXXZ @ 0x1C00CBC4C
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00CB6B0 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vNextPoint@LINER@@AEAAXXZ @ 0x1C00CBAB8 (-vNextPoint@LINER@@AEAAXXZ.c)
 */

void __fastcall LINER::vNextEvent(LINER *this)
{
  int v2; // edi
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  int v7; // eax

  *(_QWORD *)((char *)this + 692) = *((_QWORD *)this + 28);
  *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
  LINER::vNextPoint(this);
  v2 = *((_DWORD *)this + 172);
  while ( !*(_DWORD *)(*((_QWORD *)this + 89) + 40LL) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 89) + 44LL) )
      break;
    v7 = *((_DWORD *)this + 172);
    if ( v7 )
    {
      if ( (unsigned int)(v7 - 3) > 1 )
        break;
    }
    LINER::vNextPoint(this);
  }
  v3 = *((_QWORD *)this + 89);
  if ( !*(_DWORD *)(v3 + 48) && !*(_DWORD *)(v3 + 52) )
    *(_QWORD *)(v3 + 48) = *(_QWORD *)(v3 + 40);
  if ( !v2 )
  {
    v4 = *((_DWORD *)this + 172);
    if ( (unsigned int)(v4 - 1) <= 1 )
    {
      if ( v4 == 1 )
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
      v5 = *((_QWORD *)this + 89);
      *((_OWORD *)this + 15) = *(_OWORD *)v5;
      *((_OWORD *)this + 16) = *(_OWORD *)(v5 + 16);
      *((_OWORD *)this + 17) = *(_OWORD *)(v5 + 32);
      *((_OWORD *)this + 18) = *(_OWORD *)(v5 + 48);
      *((_OWORD *)this + 19) = *(_OWORD *)(v5 + 64);
      v6 = *(_QWORD *)(v5 + 80);
      *((_DWORD *)this + 172) = 0;
      *((_QWORD *)this + 40) = v6;
      *((_QWORD *)this + 89) = (char *)this + 240;
    }
  }
}
