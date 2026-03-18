/*
 * XREFs of ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C0093BC0
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::CopyUmdFileName(ADAPTER_RENDER *this, struct _D3DKMT_UMDFILENAMEINFO *a2)
{
  __int64 CurrentProcess; // rax
  _WORD *v5; // r9
  unsigned __int64 v6; // r10
  unsigned int v7; // ebx
  KMTUMDVERSION v8; // edx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  _WORD *v12; // rax
  int v13; // r11d
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int64 v16; // r8
  WCHAR *UmdFileName; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  signed __int64 v20; // r9
  WCHAR v21; // ax
  int v23; // ecx

  CurrentProcess = PsGetCurrentProcess(this);
  if ( PsGetProcessWow64Process(CurrentProcess) )
  {
    v5 = (_WORD *)*((_QWORD *)this + 31);
    v6 = *((unsigned __int16 *)this + 120);
  }
  else
  {
    v5 = (_WORD *)*((_QWORD *)this + 29);
    v6 = *((unsigned __int16 *)this + 112);
  }
  v7 = -1073741811;
  v8 = KMTUMDVERSION_DX9;
  v9 = 0LL;
  while ( 1 )
  {
    v5 = (_WORD *)((char *)v5 + v9);
    v10 = v6 >> 1;
    if ( v5 && v10 <= 0x7FFFFFFF )
    {
      v11 = v6 >> 1;
      v12 = v5;
      v13 = 0;
      if ( !v10 )
        goto LABEL_28;
      while ( *v12 )
      {
        ++v12;
        if ( !--v11 )
          goto LABEL_28;
      }
      if ( v11 )
      {
        v14 = v10 - v11;
      }
      else
      {
LABEL_28:
        v13 = -1073741811;
        v14 = 0LL;
      }
      if ( v13 >= 0 )
      {
        v15 = 2 * v14;
        goto LABEL_14;
      }
    }
    else
    {
      v13 = -1073741811;
    }
    v15 = 0LL;
LABEL_14:
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( !v15 )
      return v7;
    v9 = v15 + 2;
    ++v8;
    v6 -= v9;
    if ( (unsigned int)v8 > a2->Version )
    {
      if ( v9 != 6 )
        goto LABEL_18;
      v23 = *(_DWORD *)L"<>" - *(_DWORD *)v5;
      if ( *(_DWORD *)L"<>" == *(_DWORD *)v5 )
        v23 = asc_1C00E17E0[2] - (unsigned __int16)v5[2];
      if ( v23 )
      {
LABEL_18:
        v16 = v9 >> 1;
        UmdFileName = a2->UmdFileName;
        if ( v16 <= 0x7FFFFFFE )
        {
          v18 = v16 - 260;
          v19 = 260LL;
          v20 = (char *)v5 - (char *)UmdFileName;
          v7 = 0;
          while ( v18 + v19 )
          {
            v21 = *(WCHAR *)((char *)UmdFileName + v20);
            if ( !v21 )
              break;
            *UmdFileName++ = v21;
            if ( !--v19 )
            {
              --UmdFileName;
              v7 = -2147483643;
              break;
            }
          }
        }
        *UmdFileName = 0;
      }
      return v7;
    }
  }
}
