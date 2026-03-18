/*
 * XREFs of ?HasValidLightCollection@CLightStack@@AEBA_NXZ @ 0x18012DF44
 * Callers:
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x18001D788 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CLightStack::HasValidLightCollection(CLightStack *this)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v4; // rax

  v1 = 0LL;
  v2 = 0LL;
  if ( !*((_DWORD *)this + 6) )
    return 1;
  while ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)this + 8 * v2) + 48LL))(
            *(_QWORD *)(*(_QWORD *)this + 8 * v2),
            120LL) )
  {
LABEL_6:
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *((_DWORD *)this + 6) )
      return 1;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 8 * v2) + 112LL))(*(_QWORD *)(*(_QWORD *)this + 8 * v2));
  if ( !v1 )
  {
    v1 = v4;
    goto LABEL_6;
  }
  if ( v4 == v1 )
    goto LABEL_6;
  return 0;
}
