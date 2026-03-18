/*
 * XREFs of ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1400AA054
 * Callers:
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A992C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A9E9C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z @ 0x14030C960 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbp
  struct _DC_ATTR *UserAttr; // rax

  if ( *(_QWORD *)this && *((_BYTE *)this + 96) )
  {
    *(_DWORD *)(*(_QWORD *)this + 40LL) &= ~2u;
    *((_BYTE *)this + 96) = 0;
  }
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v3 = *(_QWORD *)this;
      v4 = CurrentProcessId & 0xFFFFFFFC;
      if ( **(_QWORD **)this )
      {
        v5 = HmgPentryFromPobj(*((_QWORD *)this + 2), v3);
      }
      else
      {
        v5 = v3 + 2152;
        *(_OWORD *)(v3 + 2152) = 0LL;
        *(_QWORD *)(v3 + 2168) = 0LL;
        *(_DWORD *)(v3 + 2160) = -2147483630;
        *(_QWORD *)(v3 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v4 == (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr(this);
        if ( UserAttr )
          DC::RestoreAttributes(*(DC **)this, UserAttr);
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
  }
}
