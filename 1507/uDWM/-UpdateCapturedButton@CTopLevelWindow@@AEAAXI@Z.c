/*
 * XREFs of ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180022A44
 * Callers:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180022B4C (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180003A94 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow::UpdateCapturedButton(CTopLevelWindow *this, int a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  CButton *v7; // rcx
  CBaseObject *v8; // rcx
  volatile signed __int32 *v9; // rcx

  v3 = 4;
  v4 = a2 - 8;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 11;
      if ( v6 )
      {
        if ( v6 == 1 )
          v3 = 0;
      }
      else
      {
        v3 = 3;
      }
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
  }
  v7 = (CButton *)*((_QWORD *)this + 95);
  if ( v7 )
  {
    CButton::SetMouseCapture(v7, 0);
    v8 = (CBaseObject *)*((_QWORD *)this + 95);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)this + 95) = 0LL;
    }
  }
  if ( v3 != 4 )
  {
    v9 = (volatile signed __int32 *)*((_QWORD *)this + v3 + 63);
    if ( v9 )
    {
      *((_QWORD *)this + 95) = v9;
      _InterlockedIncrement(v9 + 2);
      CButton::SetMouseCapture((CButton *)v9, 1);
    }
  }
}
