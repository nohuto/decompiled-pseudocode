/*
 * XREFs of pre_c_init @ 0x140018A60
 * Callers:
 *     <none>
 * Callees:
 *     _get_image_app_type @ 0x140019108 (_get_image_app_type.c)
 *     ?UpdateRegistry@CSystemAudioDeviceOffloadGraph@@SAJH@Z @ 0x140019320 (-UpdateRegistry@CSystemAudioDeviceOffloadGraph@@SAJH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 pre_c_init()
{
  int v0; // eax
  int v1; // eax
  bool v2; // zf
  _crt_app_type image_app_type; // eax

  if ( LOWORD(_ImageBase.unused) != 23117 || *(int *)((char *)&_ImageBase.unused + (int)off_14000003C) != 17744 )
    goto LABEL_2;
  v1 = *(unsigned __int16 *)((char *)&word_140000018 + (int)off_14000003C);
  if ( v1 != 267 )
  {
    if ( v1 == 523 )
    {
      v0 = 0;
      if ( *(_DWORD *)&byte_140000040[(int)off_14000003C + 68] <= 0xEu )
        goto LABEL_11;
      v2 = *(int *)((char *)&dword_1400000F8 + (int)off_14000003C) == 0;
      goto LABEL_10;
    }
LABEL_2:
    v0 = 0;
    goto LABEL_11;
  }
  v0 = 0;
  if ( *(_DWORD *)&byte_140000040[(int)off_14000003C + 52] <= 0xEu )
    goto LABEL_11;
  v2 = *(_DWORD *)&byte_140000040[(int)off_14000003C + 168] == 0;
LABEL_10:
  LOBYTE(v0) = !v2;
LABEL_11:
  dword_140055500 = v0;
  image_app_type = (unsigned int)get_image_app_type(2LL);
  __set_app_type(image_app_type);
  _onexitend = -1LL;
  _onexitbegin = -1LL;
  _fmode = fmode;
  _commode = commode;
  CSystemAudioDeviceOffloadGraph::UpdateRegistry(*(struct _exception **)&_commode);
  if ( !_defaultmatherr )
    __setusermatherr(CSystemAudioDeviceOffloadGraph::UpdateRegistry);
  return 0LL;
}
