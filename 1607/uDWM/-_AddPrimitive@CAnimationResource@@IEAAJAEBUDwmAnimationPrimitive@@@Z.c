/*
 * XREFs of ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180040368
 * Callers:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x180040510 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x180040590 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x18009A1E0 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x18009A290 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimationResource::_AddPrimitive(CAnimationResource *this, const struct DwmAnimationPrimitive *a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  bool v6; // r14
  char *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // esi
  _OWORD *v11; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx

  v2 = *((_DWORD *)this + 16);
  v3 = 0;
  v6 = 0;
  if ( *((_BYTE *)this + 80)
    || v2 && *((_QWORD *)a2 + 1) < *(_QWORD *)(32LL * (unsigned int)(v2 - 1) + *((_QWORD *)this + 5) + 8)
    || *(_DWORD *)a2 == 3 && (!v2 || *((_QWORD *)a2 + 1) == *(_QWORD *)(*((_QWORD *)this + 5) + 8LL)) )
  {
    return (unsigned int)-2147024809;
  }
  if ( v2 )
    v6 = *(_QWORD *)(32LL * (unsigned int)(v2 - 1) + *((_QWORD *)this + 5) + 8) == *((_QWORD *)a2 + 1);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 2:
      if ( !_finite(*((float *)a2 + 4))
        || !_finite(*((float *)a2 + 5))
        || !_finite(*((float *)a2 + 6))
        || !_finite(*((float *)a2 + 7)) )
      {
        return (unsigned int)-2147024809;
      }
      break;
    case 3:
      if ( *((_QWORD *)a2 + 2) > *((_QWORD *)a2 + 1) - *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) )
        return (unsigned int)-2147024809;
      break;
    case 4:
      if ( _finite(*((float *)a2 + 4)) )
      {
        *((_BYTE *)this + 80) = 1;
        break;
      }
      return (unsigned int)-2147024809;
    default:
      return (unsigned int)-2147467259;
  }
  if ( v6 )
  {
    v14 = *((_QWORD *)this + 5);
    v15 = 32LL * (unsigned int)(v2 - 1);
    *(_OWORD *)(v15 + v14) = *(_OWORD *)a2;
    *(_OWORD *)(v15 + v14 + 16) = *((_OWORD *)a2 + 1);
  }
  else
  {
    v7 = (char *)this + 40;
    v8 = *((unsigned int *)this + 16);
    v9 = v8 + 1;
    if ( (int)v8 + 1 < (unsigned int)v8 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v10 = 0;
      if ( v9 > *((_DWORD *)v7 + 5) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 0x20u, 1, a2);
        v10 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        v11 = (_OWORD *)(*(_QWORD *)v7 + 32 * v8);
        *v11 = *(_OWORD *)a2;
        v11[1] = *((_OWORD *)a2 + 1);
        *((_DWORD *)v7 + 6) = v9;
      }
    }
    return v10;
  }
  return v3;
}
