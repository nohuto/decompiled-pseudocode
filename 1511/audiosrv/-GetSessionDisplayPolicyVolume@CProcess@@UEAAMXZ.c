/*
 * XREFs of ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180028D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CProcess::GetSessionDisplayPolicyVolume(CProcess *this)
{
  float v1; // xmm6_4
  int v2; // edi
  int v3; // ebx
  _QWORD *v4; // rax
  _DWORD *v5; // rcx

  v1 = FLOAT_1_0;
  if ( !*((_DWORD *)this + 101) )
  {
    v2 = *((_DWORD *)this + 39);
    v3 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    v4 = qword_1800E68A0;
    while ( v4 )
    {
      v5 = (_DWORD *)v4[2];
      v4 = (_QWORD *)*v4;
      if ( v2 == *v5 )
      {
        v3 = v5[57];
        break;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( !v3 )
      return 0.0;
  }
  return v1;
}
