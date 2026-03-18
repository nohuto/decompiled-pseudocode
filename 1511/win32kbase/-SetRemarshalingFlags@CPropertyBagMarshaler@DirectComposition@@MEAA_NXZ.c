/*
 * XREFs of ?SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D9C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E328 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

bool __fastcall DirectComposition::CPropertyBagMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertyBagMarshaler *this)
{
  __int64 v1; // rax
  char *v3; // rbx
  char *i; // rax
  __int64 v5; // rdx
  size_t v6; // r8
  _DWORD Src[4]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    v3 = (char *)*((_QWORD *)this + 6);
    for ( i = &v3[v1];
          v3 < i
       && (*((_QWORD *)this + 15) != *((_QWORD *)this + 13)
        || (int)DirectComposition::CDCompDynamicArrayBase::Grow(
                  (DirectComposition::CPropertyBagMarshaler *)((char *)this + 72),
                  1LL,
                  0x10u) >= 0);
          i = (char *)(*((_QWORD *)this + 6) + *((_QWORD *)this + 7)) )
    {
      v5 = *((_QWORD *)this + 15);
      Src[0] = *((_DWORD *)v3 + 2);
      Src[2] = (_DWORD)v3 - *((_DWORD *)this + 12);
      Src[3] = 0;
      *((_QWORD *)this + 15) = v5 + 1;
      v6 = *((_QWORD *)this + 14);
      Src[1] = 0;
      memmove((void *)(*((_QWORD *)this + 10) + v5 * v6), Src, v6);
      switch ( *(_DWORD *)v3 )
      {
        case 0x12:
          v3 += 16;
          break;
        case 0x23:
          v3 += 20;
          break;
        case 0x34:
          v3 += 24;
          break;
        case 0x45:
        case 0x46:
        case 0x47:
          v3 += 28;
          break;
        case 0x68:
          v3 += 36;
          break;
        case 0x109:
          v3 += 76;
          break;
      }
    }
  }
  if ( *((_DWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x80u;
  return (*((_BYTE *)this + 16) & 0xC0) != 0;
}
