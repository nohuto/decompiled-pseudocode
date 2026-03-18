/*
 * XREFs of AutoRotationUpdateRegistry @ 0x1C00EC030
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C00EC074 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 */

int AutoRotationUpdateRegistry()
{
  UpdateAutoRotationRegistrySetting(
    gAutoRotationInfo,
    L"LastAutoRequest",
    1u,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  return UpdateAutoRotationRegistrySetting(
           dword_1C0329464,
           L"LastOrientation",
           0,
           L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
